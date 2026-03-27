/**
 * @file makara_control_node.cpp
 * @brief PID-based attitude and position controller for the Makara AUV.
 */

#include <rclcpp/rclcpp.hpp>
#include <makara_interfaces/msg/thruster_speeds.hpp>
#include <makara_interfaces/msg/thruster_forces.hpp>
#include <makara_interfaces/msg/combined.hpp>
#include <makara_interfaces/msg/setpoint.hpp>
#include <makara_interfaces/msg/pid.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <memory>

// Axis indices
#define SURGE 0
#define SWAY  1
#define HEAVE 2
#define ROLL  3
#define PITCH 4
#define YAW   5

class AC_AttitudeControl {
public:
    float kp[6] = {0}; float ki[6] = {0}; float kd[6] = {0};
    float err[6] = {0}; float perr[6] = {0}; float cerr[6] = {0};
    float curr_set[6] = {0}; float preSetPoint[6] = {0};
    float Forces[6] = {0};

    const float MAX_FORWARD_N = 50.0f;
    const float MAX_REVERSE_N = 40.0f;

    // 8x6 Geometry Mixing Matrix
    // Columns: [SURGE, SWAY, HEAVE, ROLL, PITCH, YAW]
    const float MIXING_MATRIX[8][6] = {
        { 1.0f, -1.0f,  0.0f,  0.0f,  0.0f, -1.0f}, // 0: H1 (FL)
        { 1.0f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f}, // 1: H2 (FR)
        {-1.0f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f}, // 2: H3 (RR)
        {-1.0f,  1.0f,  0.0f,  0.0f,  0.0f, -1.0f}, // 3: H4 (RL)
        { 0.0f,  0.0f, -1.0f,  1.0f,  1.0f,  0.0f}, // 4: V2 (FR)
        { 0.0f,  0.0f,  1.0f,  1.0f, -1.0f,  0.0f}, // 5: V1 (FL)
        { 0.0f,  0.0f, -1.0f, -1.0f, -1.0f,  0.0f}, // 6: V4 (RR)
        { 0.0f,  0.0f,  1.0f,  1.0f,  1.0f,  0.0f}  // 7: V3 (RL)
    };

    void update_pid(const makara_interfaces::msg::PID::SharedPtr msg) {
        if (msg->kp.size() >= 6) {
            for (int i = 0; i < 6; i++) {
                kp[i] = msg->kp[i]; ki[i] = msg->ki[i]; kd[i] = msg->kd[i];
            }
        }
    }

    void update_setpoints(const makara_interfaces::msg::Setpoint::SharedPtr msg) {
        if (msg->setpoints.size() >= 6) {
            for (int i = 0; i < 6; i++) {
                // Convert ROLL, PITCH, YAW (indices 3, 4, 5) to radians
                if (i >= 3) {
                    curr_set[i] = msg->setpoints[i] * (M_PI / 180.0);
                } else {
                    curr_set[i] = msg->setpoints[i];
                }
            }
        }
    }

    void normalize_thrusts(float thrusts[8]) {
        float max_violation = 1.0f;
        for (int i = 0; i < 8; i++) {
            float violation = 0.0f;
            if (thrusts[i] > 0) violation = thrusts[i] / MAX_FORWARD_N;
            else if (thrusts[i] < 0) violation = std::abs(thrusts[i]) / MAX_REVERSE_N;
            if (violation > max_violation) max_violation = violation;
        }
        if (max_violation > 1.0f) {
            for (int i = 0; i < 8; i++) thrusts[i] /= max_violation;
        }
    }

    void run_controller(const makara_interfaces::msg::Combined::SharedPtr msg, 
                        makara_interfaces::msg::ThrusterSpeeds &speeds_msg,
                        makara_interfaces::msg::ThrusterForces &forces_msg) 
    {
        float in[6] = {0};
        in[ROLL]  = msg->angular[0] * (M_PI / 180.0);
        in[PITCH] = msg->angular[1] * (M_PI / 180.0);
        in[YAW]   = msg->angular[2] * (M_PI / 180.0);
        in[SURGE] = msg->linear[0]; 
        in[SWAY]  = msg->linear[1];
        in[HEAVE] = msg->depth;

        for (int i = 0; i < 6; i++) {
            err[i] = curr_set[i] - in[i];
            if (i >= 3) err[i] = atan2(sin(err[i]), cos(err[i])); 
            float err_dot = err[i] - perr[i];
            perr[i] = err[i];
            cerr[i] = std::max(std::min(cerr[i] + err[i], 2.55f), -2.55f);
            if (preSetPoint[i] != curr_set[i]) cerr[i] = 0;
            preSetPoint[i] = curr_set[i];
            Forces[i] = kp[i] * err[i] + kd[i] * err_dot + ki[i] * cerr[i];
        }

        float thruster_outputs[8] = {0};
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 6; j++) thruster_outputs[i] += Forces[j] * MIXING_MATRIX[i][j];
        }

        normalize_thrusts(thruster_outputs);

        forces_msg.data.resize(8);
        speeds_msg.data.resize(8);
        for (int i = 0; i < 8; i++) {
            forces_msg.data[i] = thruster_outputs[i];
            float pwm;
            if (thruster_outputs[i] >= 0) pwm = 1500.0f + (thruster_outputs[i] / MAX_FORWARD_N) * 400.0f;
            else pwm = 1500.0f + (thruster_outputs[i] / MAX_REVERSE_N) * 400.0f;
            speeds_msg.data[i] = (int16_t)std::max(std::min(pwm, 1900.0f), 1100.0f);
        }
    }
};

class AttitudeControllerNode : public rclcpp::Node {
public:
    AttitudeControllerNode() : Node("makara_attitude_controller") {
        attitude_control_ = std::make_unique<AC_AttitudeControl>();
        this->declare_parameter("sim_mode", true);
        sim_mode_ = this->get_parameter("sim_mode").as_bool();
        thruster_pub_ = this->create_publisher<makara_interfaces::msg::ThrusterSpeeds>("/thruster_speeds", 10);
        forces_pub_ = this->create_publisher<makara_interfaces::msg::ThrusterForces>("/thruster_forces", 10);
        combined_sub_ = this->create_subscription<makara_interfaces::msg::Combined>("/combined", 10, std::bind(&AttitudeControllerNode::combined_callback, this, std::placeholders::_1));
        setpoint_sub_ = this->create_subscription<makara_interfaces::msg::Setpoint>("/setpoints", 10, std::bind(&AttitudeControllerNode::setpoint_callback, this, std::placeholders::_1));
        pid_sub_ = this->create_subscription<makara_interfaces::msg::PID>("/pid_params", 10, std::bind(&AttitudeControllerNode::pid_callback, this, std::placeholders::_1));
    }

private:
    void combined_callback(const makara_interfaces::msg::Combined::SharedPtr msg) { 
        auto speeds_msg = makara_interfaces::msg::ThrusterSpeeds();
        auto forces_msg = makara_interfaces::msg::ThrusterForces();
        attitude_control_->run_controller(msg, speeds_msg, forces_msg);
        
        // Always publish PWM to speeds topic for GUI/monitoring
        thruster_pub_->publish(speeds_msg);
        if (sim_mode_) forces_pub_->publish(forces_msg);
    }
    void setpoint_callback(const makara_interfaces::msg::Setpoint::SharedPtr msg) { attitude_control_->update_setpoints(msg); }
    void pid_callback(const makara_interfaces::msg::PID::SharedPtr msg) { attitude_control_->update_pid(msg); }
    bool sim_mode_;
    std::unique_ptr<AC_AttitudeControl> attitude_control_;
    rclcpp::Publisher<makara_interfaces::msg::ThrusterSpeeds>::SharedPtr thruster_pub_;
    rclcpp::Publisher<makara_interfaces::msg::ThrusterForces>::SharedPtr forces_pub_;
    rclcpp::Subscription<makara_interfaces::msg::Combined>::SharedPtr combined_sub_;
    rclcpp::Subscription<makara_interfaces::msg::Setpoint>::SharedPtr setpoint_sub_;
    rclcpp::Subscription<makara_interfaces::msg::PID>::SharedPtr pid_sub_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AttitudeControllerNode>());
    rclcpp::shutdown();
    return 0;
}
