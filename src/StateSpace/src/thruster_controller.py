#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64

class ThrusterController(Node):
    def __init__(self):
        super().__init__("thruster_controller")
        self.get_logger().info("BlueROV2 Safety-Capped Controller Live.")
        self.publishers_ = {tid: self.create_publisher(Float64, f"/bluerov2/thruster{tid}/cmd", 10) for tid in range(1, 9)}
        self.cmd_vel_sub = self.create_subscription(Twist, "/cmd_vel", self.cmd_vel_callback, 10)

    def cmd_vel_callback(self, msg):
        s, sw, h, y = msg.linear.x, msg.linear.y, msg.linear.z, msg.angular.z
        
        # Mixing matrix
        thrusts = {
            1:  s + sw - y, 2:  s - sw + y, 3: -s + sw + y, 4: -s - sw - y,
            5: -h, 6: -h, 7: -h, 8: -h
        }
        
        # SAFETY CAP: Limit thrust to +/- 50.0 Newtons
        # This prevents Gazebo physics from exploding when speed is set too high
        MAX_FORCE = 50.0
        
        scale = 1.0
        for tid, val in thrusts.items():
            out = float(val * scale)
            # Clamp the value
            out = max(min(out, MAX_FORCE), -MAX_FORCE)
            
            m = Float64()
            m.data = out
            self.publishers_[tid].publish(m)

def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(ThrusterController())
    rclpy.shutdown()

if __name__ == "__main__": main()
