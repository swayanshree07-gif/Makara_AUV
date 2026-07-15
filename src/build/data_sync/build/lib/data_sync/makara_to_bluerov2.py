import rclpy
from rclpy.node import Node

from mavros_msgs.msg import RCOut
from std_msgs.msg import Float32MultiArray


class MakaraToBlueROV2(Node):

    def __init__(self):
        super().__init__('makara_to_bluerov2')

        self.subscription = self.create_subscription(
            RCOut,
            '/mavros/rc/out',
            self.callback,
            10
        )

        self.publisher = self.create_publisher(
            Float32MultiArray,
            '/thruster_forces',
            10
        )

        # Scaling factor (tune later)
        self.scale = 0.01

        self.get_logger().info("Makara → BlueROV2 Node Started")

    def callback(self, msg):
        forces_msg = Float32MultiArray()

        forces = []

        for pwm in msg.channels:
            force = (pwm - 1500) * self.scale
            forces.append(force)

        forces_msg.data = forces

        self.publisher.publish(forces_msg)

        self.get_logger().info(f"Forces: {forces}")


def main(args=None):
    rclpy.init(args=args)
    node = MakaraToBlueROV2()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
