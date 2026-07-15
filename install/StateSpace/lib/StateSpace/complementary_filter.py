#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistWithCovarianceStamped, PointStamped
from sensor_msgs.msg import Imu
import message_filters
import numpy as np

class ComplementaryFilterNode(Node):
    def __init__(self):
        super().__init__('complementary_filter_node')

        self.get_logger().info("Complementary Filter Node started.")

        # Declare parameters for filter gain and update rate
        self.declare_parameter('alpha', 0.98) # Complementary filter gain (0 to 1)
        self.declare_parameter('filter_update_rate', 50.0) # Hz

        self.alpha = self.get_parameter('alpha').get_parameter_value().double_value
        self.filter_update_period = 1.0 / self.get_parameter('filter_update_rate').get_parameter_value().double_value

        # State variables: [pos_x, pos_y, vel_x, vel_y]
        self.state = np.array([0.0, 0.0, 0.0, 0.0]) # x, y, vx, vy
        self.last_imu_time = None
        self.last_dvl_time = None

        # Publishers
        self.position_publisher = self.create_publisher(PointStamped, '/estimated_position', 10)

        # Message filters for DVL and IMU
        self.dvl_sub = message_filters.Subscriber(self, TwistWithCovarianceStamped, '/dvl/velocity')
        self.imu_sub = message_filters.Subscriber(self, Imu, '/imu/data')

        # ApproximateTimeSynchronizer for DVL and IMU
        # Adjust queue_size and slop based on sensor frequencies and tolerance
        self.ts = message_filters.ApproximateTimeSynchronizer(
            [self.dvl_sub, self.imu_sub],
            queue_size=10,
            slop=0.1 # Allow messages to be up to 0.1 seconds apart
        )
        self.ts.registerCallback(self.synchronized_callback)

        # Timer for filter update (if not purely message-driven) - can be used for prediction step
        self.filter_timer = self.create_timer(self.filter_update_period, self.filter_update_timer_callback)

    def synchronized_callback(self, dvl_msg, imu_msg):
        # Process synchronized messages
        # self.get_logger().info("Received synchronized DVL and IMU messages.")

        # DVL provides velocity
        dvl_vx = dvl_msg.twist.twist.linear.x
        dvl_vy = dvl_msg.twist.twist.linear.y

        # IMU provides linear acceleration (assuming in base_link or vehicle frame)
        imu_ax = imu_msg.linear_acceleration.x
        imu_ay = imu_msg.linear_acceleration.y

        current_time = self.get_clock().now().nanoseconds / 1e9

        if self.last_imu_time is None:
            self.last_imu_time = current_time
            self.last_dvl_time = current_time # Initialize DVL time as well
            return

        dt_imu = current_time - self.last_imu_time
        dt_dvl = current_time - self.last_dvl_time # For future use if DVL callback is separate

        # --- Prediction step using IMU (high-pass equivalent for velocity change) ---
        # Integrate IMU acceleration to get change in velocity
        delta_vx_imu = imu_ax * dt_imu
        delta_vy_imu = imu_ay * dt_imu

        # Update velocity estimate from IMU
        # This is the "noisy" high-frequency part that will drift
        imu_integrated_vx = self.state[2] + delta_vx_imu
        imu_integrated_vy = self.state[3] + delta_vy_imu

        # --- Correction step using DVL (low-pass equivalent for stable velocity) ---
        # Blend IMU-derived velocity with DVL velocity using complementary filter
        self.state[2] = self.alpha * dvl_vx + (1.0 - self.alpha) * imu_integrated_vx
        self.state[3] = self.alpha * dvl_vy + (1.0 - self.alpha) * imu_integrated_vy

        # --- Position Integration ---
        # Integrate fused velocity to get position
        self.state[0] += self.state[2] * dt_imu # Use IMU dt as it's typically faster
        self.state[1] += self.state[3] * dt_imu

        self.last_imu_time = current_time
        self.last_dvl_time = current_time # Keep DVL time updated

        self.publish_estimated_position()

    def filter_update_timer_callback(self):
        # This timer can be used for a prediction step in a more complex filter
        # or for publishing at a fixed rate if messages are sparse.
        # For this simple complementary filter, we primarily rely on the synchronized callback.
        # If no synchronized messages are coming in, we could potentially do a
        # prediction here based on the last known velocity and IMU acceleration.
        pass

    def publish_estimated_position(self):
        pos_msg = PointStamped()
        pos_msg.header.stamp = self.get_clock().now().to_msg()
        pos_msg.header.frame_id = 'odom' # Or a more appropriate frame_id
        pos_msg.point.x = self.state[0]
        pos_msg.point.y = self.state[1]
        pos_msg.point.z = 0.0 # Assuming 2D position estimation for now

        self.position_publisher.publish(pos_msg)
        self.get_logger().info(f"Estimated Position: x={self.state[0]:.2f}, y={self.state[1]:.2f}, Vx={self.state[2]:.2f}, Vy={self.state[3]:.2f}")


def main(args=None):
    rclpy.init(args=args)
    node = ComplementaryFilterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
