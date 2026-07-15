import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Imu
from geometry_msgs.msg import PoseStamped

from message_filters import Subscriber, ApproximateTimeSynchronizer


class StabilitySyncNode(Node):

    def __init__(self):
        super().__init__('stability_sync_node')

        # Subscribers with message_filters
        self.imu_sub = Subscriber(self, Imu, '/mavros/imu/data')
        self.pose_sub = Subscriber(self, PoseStamped, '/mavros/local_position/pose')

        # Sync (IMPORTANT)
        self.ts = ApproximateTimeSynchronizer(
            [self.imu_sub, self.pose_sub],
            queue_size=10,
            slop=0.1
        )
        self.ts.registerCallback(self.sync_callback)

        # Publisher (simple combined output as PoseStamped for now)
        self.publisher = self.create_publisher(
            PoseStamped,
            '/combined_state',
            10
        )

        self.get_logger().info("Stability Sync Node Started")

    def sync_callback(self, imu_msg, pose_msg):
        # For now: forward pose but log IMU usage
        combined = PoseStamped()

        combined.header = pose_msg.header
        combined.pose = pose_msg.pose

        self.publisher.publish(combined)

        self.get_logger().info("Published combined state")


def main(args=None):
    rclpy.init(args=args)
    node = StabilitySyncNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
