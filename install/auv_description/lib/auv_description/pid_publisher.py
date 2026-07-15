#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from makara_interfaces.msg import PID

class PIDPublisher(Node):
    def __init__(self):
        super().__init__('pid_publisher')
        self.publisher_ = self.create_publisher(PID, '/pid_params', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        
        # NEW Order in C++ node: 0:SURGE, 1:SWAY, 2:HEAVE, 3:ROLL, 4:PITCH, 5:YAW
        self.kp = [0.0, 0.0, 5.0, 1.0, 1.0, 0.0]
        self.ki = [0.0, 0.0, 0.01, 0.0, 0.0, 0.0]
        self.kd = [0.0, 0.0, 1.0, 0.5, 0.5, 0.0]
        self.get_logger().info('PID Gains Publisher started (Aligned with 8-Thruster Matrix).')

    def timer_callback(self):
        msg = PID()
        msg.kp = self.kp; msg.ki = self.ki; msg.kd = self.kd
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = PIDPublisher(); rclpy.spin(node); rclpy.shutdown()

if __name__ == '__main__': main()
