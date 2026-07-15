#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistWithCovarianceStamped
from sensor_msgs.msg import Imu
import random
import numpy as np

class DummySensorPublisher(Node):
    def __init__(self):
        super().__init__('dummy_sensor_publisher')

        self.get_logger().info("Dummy Sensor Publisher started.")

        # Declare parameters for simulation
        self.declare_parameter('sim_vx', 0.5) # Simulated constant velocity in x
        self.declare_parameter('sim_vy', 0.1) # Simulated constant velocity in y
        self.declare_parameter('imu_noise_std_dev_accel', 0.05) # IMU acceleration noise
        self.declare_parameter('dvl_noise_std_dev_vel', 0.02) # DVL velocity noise
        self.declare_parameter('imu_frequency', 100.0) # Hz
        self.declare_parameter('dvl_frequency', 10.0) # Hz

        self.sim_vx = self.get_parameter('sim_vx').get_parameter_value().double_value
        self.sim_vy = self.get_parameter('sim_vy').get_parameter_value().double_value
        self.imu_noise_std_dev_accel = self.get_parameter('imu_noise_std_dev_accel').get_parameter_value().double_value
        self.dvl_noise_std_dev_vel = self.get_parameter('dvl_noise_std_dev_vel').get_parameter_value().double_value
        self.imu_frequency = self.get_parameter('imu_frequency').get_parameter_value().double_value
        self.dvl_frequency = self.get_parameter('dvl_frequency').get_parameter_value().double_value

        # Publishers
        self.dvl_publisher = self.create_publisher(TwistWithCovarianceStamped, '/dvl/velocity', 10)
        self.imu_publisher = self.create_publisher(Imu, '/imu/data', 10)

        # Timers
        self.imu_timer = self.create_timer(1.0 / self.imu_frequency, self.publish_imu_data)
        self.dvl_timer = self.create_timer(1.0 / self.dvl_frequency, self.publish_dvl_data)

        # Current simulated state (for IMU integration)
        self.current_sim_vx = self.sim_vx
        self.current_sim_vy = self.sim_vy
        self.current_sim_ax = 0.0
        self.current_sim_ay = 0.0

    def publish_dvl_data(self):
        dvl_msg = TwistWithCovarianceStamped()
        dvl_msg.header.stamp = self.get_clock().now().to_msg()
        dvl_msg.header.frame_id = 'base_link'

        # Simulate true velocity with noise
        dvl_msg.twist.twist.linear.x = self.sim_vx + random.gauss(0, self.dvl_noise_std_dev_vel)
        dvl_msg.twist.twist.linear.y = self.sim_vy + random.gauss(0, self.dvl_noise_std_dev_vel)
        dvl_msg.twist.twist.linear.z = 0.0 # Assuming 2D motion

        # Add covariance (example values)
        dvl_msg.twist.covariance[0] = self.dvl_noise_std_dev_vel**2 # vx variance
        dvl_msg.twist.covariance[7] = self.dvl_noise_std_dev_vel**2 # vy variance

        self.dvl_publisher.publish(dvl_msg)
        # self.get_logger().info(f"Published DVL: Vx={dvl_msg.twist.twist.linear.x:.2f}, Vy={dvl_msg.twist.twist.linear.y:.2f}")

    def publish_imu_data(self):
        imu_msg = Imu()
        imu_msg.header.stamp = self.get_clock().now().to_msg()
        imu_msg.header.frame_id = 'base_link'

        # Simulate acceleration (e.g., if velocity is changing, or just noise)
        imu_msg.linear_acceleration.x = self.current_sim_ax + random.gauss(0, self.imu_noise_std_dev_accel)
        imu_msg.linear_acceleration.y = self.current_sim_ay + random.gauss(0, self.imu_noise_std_dev_accel)
        imu_msg.linear_acceleration.z = 0.0 # Assuming 2D motion

        # Add covariance (example values)
        imu_msg.linear_acceleration_covariance[0] = self.imu_noise_std_dev_accel**2 # ax variance
        imu_msg.linear_acceleration_covariance[4] = self.imu_noise_std_dev_accel**2 # ay variance

        # Orientation is not directly used by the complementary filter for position,
        # but typically IMU provides it. We'll leave it as identity for now.
        imu_msg.orientation.x = 0.0
        imu_msg.orientation.y = 0.0
        imu_msg.orientation.z = 0.0
        imu_msg.orientation.w = 1.0
        imu_msg.orientation_covariance[0] = -1.0 # -1 indicates orientation is not reported

        self.imu_publisher.publish(imu_msg)
        # self.get_logger().info(f"Published IMU: Ax={imu_msg.linear_acceleration.x:.2f}, Ay={imu_msg.linear_acceleration.y:.2f}")

def main(args=None):
    rclpy.init(args=args)
    node = DummySensorPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
