#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from sensor_msgs.msg import Imu
from nav_msgs.msg import Odometry
from tf2_msgs.msg import TFMessage
from makara_interfaces.msg import ThrusterForces, Combined
import math

class SimBridge(Node):
    def __init__(self):
        super().__init__('makara_sim_bridge')
        self.thruster_pubs = []
        for i in range(1, 9):
            pub = self.create_publisher(Float64, f'/model/bluerov2/joint/thruster{i}_joint/cmd_thrust', 10)
            self.thruster_pubs.append(pub)

        self.combined_pub = self.create_publisher(Combined, '/combined', 10)
        
        # Subscribe to direct forces from the controller
        self.create_subscription(ThrusterForces, '/thruster_forces', self.thruster_callback, 10)
        
        self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        self.create_subscription(TFMessage, '/world/sauvc_pool_world/pose/info', self.pose_callback, 10)
        self.create_subscription(Odometry, '/model/bluerov2/odometry', self.odom_callback, 10)

        self.roll, self.pitch, self.yaw = 0.0, 0.0, 0.0
        self.vx, self.vy, self.vz = 0.0, 0.0, 0.0
        self.depth = 0.0
        self.get_logger().info('Makara Simplified Sim Bridge Started.')

    def imu_callback(self, msg: Imu):
        q = msg.orientation
        sinr_cosp = 2.0 * (q.w * q.x + q.y * q.z)
        cosr_cosp = 1.0 - 2.0 * (q.x * q.x + q.y * q.y)
        self.roll = math.atan2(sinr_cosp, cosr_cosp)
        
        sinp = 2.0 * (q.w * q.y - q.z * q.x)
        sinp = max(-1.0, min(1.0, sinp))
        self.pitch = math.asin(sinp)
        
        siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
        self.yaw = math.atan2(siny_cosp, cosy_cosp)
        
        combined = Combined()
        # Publish in DEGREES for consistency with StabilitySyncNode and Controller expectation
        combined.angular = [
            math.degrees(self.roll), 
            math.degrees(self.pitch), 
            math.degrees(self.yaw)
        ]
        combined.linear = [float(self.vx), float(self.vy), float(self.vz)]
        combined.depth = float(self.depth)
        self.combined_pub.publish(combined)

    def pose_callback(self, msg: TFMessage):
        for transform in msg.transforms:
            if transform.child_frame_id == 'bluerov2':
                self.depth = 2.0 - transform.transform.translation.z
                break
                
    def odom_callback(self, msg: Odometry):
        self.vx, self.vy, self.vz = msg.twist.twist.linear.x, msg.twist.twist.linear.y, msg.twist.twist.linear.z

    def thruster_callback(self, msg: ThrusterForces):
        """Passthrough: Publish direct forces to Gazebo joints."""
        if len(msg.data) < 8: return
        
        for i in range(8):
            f_msg = Float64()
            f_msg.data = float(msg.data[i])
            self.thruster_pubs[i].publish(f_msg)

def main(args=None):
    rclpy.init(args=args); node = SimBridge(); rclpy.spin(node); rclpy.shutdown()

if __name__ == '__main__': main()
