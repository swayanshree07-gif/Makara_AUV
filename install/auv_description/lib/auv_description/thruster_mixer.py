#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64

class ThrusterMixer(Node):
    def __init__(self):
        super().__init__('thruster_mixer')
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10)
        
        # Publishers for 8 thrusters
        self.thruster_pubs = []
        for i in range(1, 9):
            topic = f'/model/bluerov2/joint/thruster{i}_joint/cmd_thrust'
            pub = self.create_publisher(Float64, topic, 10)
            self.thruster_pubs.append(pub)
            
        self.scale_factor = 50.0
        self.get_logger().info('Thruster Mixer Node started')

    def cmd_vel_callback(self, msg):
        lx = msg.linear.x
        ly = msg.linear.y
        lz = msg.linear.z
        az = msg.angular.z

        # Horizontal thrusters (1-4)
        t1 = (lx - ly - az) * self.scale_factor
        t2 = (lx + ly + az) * self.scale_factor
        t3 = (-lx - ly + az) * self.scale_factor
        t4 = (-lx + ly - az) * self.scale_factor

        # Vertical thrusters (5-8)
        t5 = t6 = t7 = t8 = lz * self.scale_factor

        thrusts = [t1, t2, t3, t4, t5, t6, t7, t8]

        for i, val in enumerate(thrusts):
            msg_float = Float64()
            msg_float.data = float(val)
            self.thruster_pubs[i].publish(msg_float)

def main(args=None):
    rclpy.init(args=args)
    node = ThrusterMixer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
