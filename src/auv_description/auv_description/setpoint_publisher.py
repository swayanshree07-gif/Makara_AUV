#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from makara_interfaces.msg import Setpoint

class SetpointPublisher(Node):
    def __init__(self):
        super().__init__('setpoint_publisher')
        self.publisher_ = self.create_publisher(Setpoint, '/setpoints', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        # NEW Order: 0:SURGE, 1:SWAY, 2:HEAVE, 3:ROLL, 4:PITCH, 5:YAW
        # Set depth to 1.5m (index 2)
        self.setpoints = [0.0, 0.0, 1.5, 0.0, 0.0, 0.0]
        self.get_logger().info('Setpoint Publisher started (1.5m Depth target).')

    def timer_callback(self):
        msg = Setpoint()
        msg.setpoints = self.setpoints
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = SetpointPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
