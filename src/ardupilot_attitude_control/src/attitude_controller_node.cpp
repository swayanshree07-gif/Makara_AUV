/**
 * @file attitude_controller_node.cpp
 * @brief ROS 2 node for attitude control of the Hammerhead AUV.
 * 
 * This node implements a PID-based attitude controller that subscribes to sensor data
 * and setpoints, and publishes thruster speed commands.
 */

#include <rclcpp/rclcpp.hpp>
#include <hammerhead_interfaces/msg/thruster_speeds.hpp>
#include <hammerhead_interfaces/msg/combined.hpp>
#include <hammerhead_interfaces/msg/setpoint.hpp>
#include <hammerhead_interfaces/msg/pid.hpp>
#include <cmath>

#define SURGE 0
#define SWAY 1
#define HEAVE 2
#define ROLL 3
#define PITCH 4
#define YAW 5

/**
 * @class AC_AttitudeControl
 * @brief Core logic for the attitude PID controller and thruster mixing.
 */
class AC_AttitudeControl {
public:
    float kp[6] = {0}; ///< Proportional gains for Surge, Sway, Heave, Roll, Pitch, Yaw
    float ki[6] = {0}; ///< Integral gains
    float kd[6] = {0}; ///< Derivative gains

    float err[6] = {0};     ///< Current error
    float perr[6] = {0};    ///< Previous error for derivative term
    float cerr[6] = {0};    ///< Cumulative error for integral term
    float err_dot[6] = {0}; ///< Rate of change of error
    float out[6] = {0};     ///< Raw PID output for each axis
    float preout[6] = {0};  ///< Previous output for filtering

    float curr_set[6] = {0};   ///< Current setpoints for each axis
    float preSetPoint[6] = {0}; ///< Previous setpoints to detect changes

    float Forces[6] = {0}; ///< Calculated forces for each thruster
    float tMin = 0.1;      ///< Minimal threshold for force calculation to avoid deadzone jitter

    /**
     * @brief Updates PID gains from a ROS message.
     * @param msg Shared pointer to the PID message containing new gains.
     */
    void update_pid(const hammerhead_interfaces::msg::PID::SharedPtr msg) {
        if (msg->kp.size() >= 3 && msg->ki.size() >= 3 && msg->kd.size() >= 3) {
            for (int i = 0; i < 3; i++) {
                kp[i + 3] = msg->kp[i];
                ki[i + 3] = msg->ki[i];
                kd[i + 3] = msg->kd[i];
                kp[i] = msg->kp[i + 3];
                ki[i] = msg->ki[i + 3];
                kd[i] = msg->kd[i + 3];
            }
        }
    }

    /**
     * @brief Updates setpoints for the controller.
     * @param msg Shared pointer to the Setpoint message.
     */
    void update_setpoints(const hammerhead_interfaces::msg::Setpoint::SharedPtr msg) {
        if (msg->setpoints.size() >= 6) {
            for (int i = 0; i < 6; i++) {
                curr_set[i] = msg->setpoints[i];
            }
        }
    }

    /**
     * @brief Computes thruster speeds based on current sensor state and setpoints.
     * 
     * This function performs the following steps:
     * 1. Extracts state from the Combined message (IMU + Depth).
     * 2. Calculates error for each axis, handling angular wrap-around.
     * 3. Computes PID terms (P, I, D).
     * 4. Applies thruster mixing logic specifically for the Hammerhead configuration.
     * 5. Maps forces to PWM-like thruster speed values (1100-1900 range, 1500 neutral).
     * 
     * @param msg Shared pointer to the Combined sensor message.
     * @return hammerhead_interfaces::msg::ThrusterSpeeds message for publication.
     */
    hammerhead_interfaces::msg::ThrusterSpeeds run_controller(const hammerhead_interfaces::msg::Combined::SharedPtr msg) {
        float in[6] = {0};

        if (msg->angular.size() >= 3) {
            // Convert to radians and handle inputs
            for (int i = 0; i < 3; i++) {
                in[i] = msg->angular[i] * (M_PI / 180.0);
                in[i + 3] = 0;
            }
            in[5] = msg->depth;
            in[1] = msg->angular[1] * M_PI / 180.0; // pitch_tare equivalent
            in[0] = msg->angular[0] * M_PI / 180.0; // roll_tare equivalent
        }

        // Error calculation with angular wrapping for attitude axes
        for (int i = 0; i < 3; i++) {
            err[i] = curr_set[i] - in[i];
            err[i] = atan2(sin(err[i]), cos(err[i]));
            err[i + 3] = curr_set[i + 3] - in[i + 3];
        }

        // Update error derivatives and integrals
        for (int i = 0; i < 6; i++) {
            err_dot[i] = err[i] - perr[i];
            perr[i] = err[i];
            cerr[i] += err[i]; 
            // Anti-windup clamping
            if (cerr[i] > 2.55)
                cerr[i] = 2.55;
            else if (cerr[i] < -2.55)
                cerr[i] = -2.55;
            // Reset integral if setpoint changes significantly
            if (preSetPoint[i] != curr_set[i])
                cerr[i] = 0;
            preSetPoint[i] = curr_set[i];
        }

        // PID output calculation
        for (int i = 0; i < 6; i++) {
            out[i] = kp[i] * err[i] + kd[i] * err_dot[i] + ki[i] * cerr[i];
        }

        // Special handling for surge if setpoint is zero
        if (curr_set[SURGE] == 0) {
            out[SURGE] = 0.642 * err[SURGE] + 0.756 * err_dot[SURGE] + 0.007 * cerr[SURGE];
        }

        // Simple filtering for heave output
        if (out[HEAVE] > 0.5)
            out[HEAVE] = out[HEAVE] - 0.975 * (out[HEAVE] - preout[HEAVE]);

        preout[5] = out[5];

        // Sway adjustment factor based on pitch setpoint (empirical tuning)
        float alpha_tmp = 0;
        switch ((int)curr_set[1]) {
            case 2: alpha_tmp = 0.1; break;
            case -2: alpha_tmp = 0.1; break;
            case 3: alpha_tmp = 1.1; break;
            case -3: alpha_tmp = 0.1; break;
            case 5: alpha_tmp = 10.5; break;
            case -5: alpha_tmp = 0.3; break;
            case 10: alpha_tmp = 1.3; break;
            case -10: alpha_tmp = 10.5; break;
            default: alpha_tmp = 0;
        }

        // Hammerhead Specific Thruster Mixing
        // Maps Surge, Sway, Heave, Roll, Pitch, Yaw to 6 physical thrusters
        Forces[0] = out[HEAVE] - out[PITCH] - out[ROLL];
        Forces[1] = out[HEAVE] - out[PITCH] + out[ROLL];
        Forces[2] = out[HEAVE] * 2 + 2 * out[PITCH];
        Forces[3] = out[YAW] + out[SURGE] + alpha_tmp * out[SWAY];
        Forces[4] = -out[YAW] + out[SURGE] - alpha_tmp * out[SWAY];
        Forces[5] = out[SWAY];

        hammerhead_interfaces::msg::ThrusterSpeeds t_msg;
        t_msg.data.resize(6);
        for (int i = 0; i < 6; i++) {
            // Map calculated forces to PWM range (1500 is neutral)
            if (Forces[i] >= tMin)
                Forces[i] = (Forces[i]) * 370 / 2.36 + 1530;
            else if (Forces[i] <= (-tMin))
                Forces[i] = 1470 + (Forces[i]) * 370 / 1.85;
            else
                Forces[i] = 1500;

            // Satclamping
            if (Forces[i] > 1750) Forces[i] = 1750;
            else if (Forces[i] < 1250) Forces[i] = 1250;

            t_msg.data[i] = (int16_t)Forces[i];
        }

        t_msg.reverse.resize(6, false);
        return t_msg;
    }
};

/**
 * @class AttitudeControllerNode
 * @brief ROS 2 Node that wraps the AC_AttitudeControl logic.
 * 
 * Subscribes to:
 * - /combined (hammerhead_interfaces::msg::Combined): Sensor fusion data.
 * - /setpoints (hammerhead_interfaces::msg::Setpoint): Target orientation/depth.
 * - /pid_params (hammerhead_interfaces::msg::PID): Dynamic gain updates.
 * 
 * Publishes to:
 * - /thruster_speeds (hammerhead_interfaces::msg::ThrusterSpeeds): Commands for motors.
 */
class AttitudeControllerNode : public rclcpp::Node {
public:
    /**
     * @brief Constructor for AttitudeControllerNode.
     */
    AttitudeControllerNode() : Node("hammerhead_attitude_controller") {
        RCLCPP_INFO(this->get_logger(), "Hammerhead AC Node Started.");
        attitude_control_ = std::make_unique<AC_AttitudeControl>();

        thruster_pub_ = this->create_publisher<hammerhead_interfaces::msg::ThrusterSpeeds>("/thruster_speeds", 10);

        combined_sub_ = this->create_subscription<hammerhead_interfaces::msg::Combined>(
            "/combined", 10, std::bind(&AttitudeControllerNode::combined_callback, this, std::placeholders::_1));

        setpoint_sub_ = this->create_subscription<hammerhead_interfaces::msg::Setpoint>(
            "/setpoints", 10, std::bind(&AttitudeControllerNode::setpoint_callback, this, std::placeholders::_1));

        pid_sub_ = this->create_subscription<hammerhead_interfaces::msg::PID>(
            "/pid_params", 10, std::bind(&AttitudeControllerNode::pid_callback, this, std::placeholders::_1));
    }

private:
    /**
     * @brief Callback for combined sensor data. Triggers the controller execution.
     * @param msg Sensor data message.
     */
    void combined_callback(const hammerhead_interfaces::msg::Combined::SharedPtr msg) {
        auto thruster_msg = attitude_control_->run_controller(msg);
        thruster_pub_->publish(thruster_msg);
    }

    /**
     * @brief Callback for setpoint updates.
     * @param msg Setpoint message.
     */
    void setpoint_callback(const hammerhead_interfaces::msg::Setpoint::SharedPtr msg) {
        attitude_control_->update_setpoints(msg);
    }

    /**
     * @brief Callback for PID gain updates.
     * @param msg PID message.
     */
    void pid_callback(const hammerhead_interfaces::msg::PID::SharedPtr msg) {
        attitude_control_->update_pid(msg);
    }

    std::unique_ptr<AC_AttitudeControl> attitude_control_; ///< Controller logic instance
    rclcpp::Publisher<hammerhead_interfaces::msg::ThrusterSpeeds>::SharedPtr thruster_pub_; ///< Thruster command publisher
    rclcpp::Subscription<hammerhead_interfaces::msg::Combined>::SharedPtr combined_sub_; ///< Sensor data subscription
    rclcpp::Subscription<hammerhead_interfaces::msg::Setpoint>::SharedPtr setpoint_sub_; ///< Setpoint subscription
    rclcpp::Subscription<hammerhead_interfaces::msg::PID>::SharedPtr pid_sub_; ///< PID gain subscription
};

/**
 * @brief Main function to initialize and spin the ROS 2 node.
 */
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AttitudeControllerNode>());
    rclcpp::shutdown();
    return 0;
}