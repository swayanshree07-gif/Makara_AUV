#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistWithCovarianceStamped, PointStamped
from sensor_msgs.msg import Imu
import message_filters
import numpy as np

class EKFNode(Node):
    def __init__(self):
        super().__init__('ekf_node')
        self.get_logger().info("EKF Node started.")

        # --- Parameters ---
        # State: [x, y, vx, vy]
        self.declare_parameter('initial_state', [0.0, 0.0, 0.0, 0.0])
        self.declare_parameter('process_noise_q', [0.1, 0.1, 0.1, 0.1]) # Variances for x, y, vx, vy
        self.declare_parameter('measurement_noise_r_dvl', [0.01, 0.01]) # Variances for DVL vx, vy

        # --- EKF Initialization ---
        # State vector: [x, y, vx, vy]
        self.x = np.array(self.get_parameter('initial_state').get_parameter_value().double_array_value)

        # State covariance matrix P
        self.P = np.diag([1.0, 1.0, 1.0, 1.0]) # Initial uncertainty

        # Process noise covariance matrix Q
        q_diag = self.get_parameter('process_noise_q').get_parameter_value().double_array_value
        self.Q = np.diag(q_diag)

        # Measurement noise covariance matrix R for DVL
        r_dvl_diag = self.get_parameter('measurement_noise_r_dvl').get_parameter_value().double_array_value
        self.R_dvl = np.diag(r_dvl_diag)

        self.last_time = None

        # --- ROS2 Setup ---
        self.position_publisher = self.create_publisher(PointStamped, '/estimated_position_ekf', 10)
        self.imu_sub = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        self.dvl_sub = self.create_subscription(TwistWithCovarianceStamped, '/dvl/velocity', self.dvl_callback, 10)

    def imu_callback(self, msg):
        current_time = self.get_clock().now().nanoseconds / 1e9
        if self.last_time is None:
            self.last_time = current_time
            return
        
        dt = current_time - self.last_time
        self.last_time = current_time

        # --- EKF Prediction Step ---
        # State transition matrix F
        F = np.array([
            [1, 0, dt, 0],
            [0, 1, 0, dt],
            [0, 0, 1, 0],
            [0, 0, 0, 1]
        ])

        # Control input vector u
        u = np.array([msg.linear_acceleration.x, msg.linear_acceleration.y])

        # Control input model B
        B = np.array([
            [0.5*dt**2, 0],
            [0, 0.5*dt**2],
            [dt, 0],
            [0, dt]
        ])

        # Predict state
        self.x = F @ self.x + B @ u
        # Predict state covariance
        self.P = F @ self.P @ F.T + self.Q

    def dvl_callback(self, msg):
        if self.last_time is None:
            return # Wait for IMU to initialize time

        # --- EKF Update Step (with DVL data) ---
        # Measurement vector z
        z = np.array([msg.twist.twist.linear.x, msg.twist.twist.linear.y])

        # Measurement matrix H
        H = np.array([
            [0, 0, 1, 0],
            [0, 0, 0, 1]
        ])

        # Kalman Gain K
        S = H @ self.P @ H.T + self.R_dvl
        K = self.P @ H.T @ np.linalg.inv(S)

        # Update state
        y = z - H @ self.x
        self.x = self.x + K @ y

        # Update state covariance
        self.P = (np.eye(4) - K @ H) @ self.P

        self.publish_estimated_position()

    def publish_estimated_position(self):
        pos_msg = PointStamped()
        pos_msg.header.stamp = self.get_clock().now().to_msg()
        pos_msg.header.frame_id = 'odom'
        pos_msg.point.x = self.x[0]
        pos_msg.point.y = self.x[1]
        pos_msg.point.z = 0.0

        self.position_publisher.publish(pos_msg)
        self.get_logger().info(f"EKF Estimated Position: x={self.x[0]:.2f}, y={self.x[1]:.2f}, Vx={self.x[2]:.2f}, Vy={self.x[3]:.2f}")

def main(args=None):
    rclpy.init(args=args)
    node = EKFNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
