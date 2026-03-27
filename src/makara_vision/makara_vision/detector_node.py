"""
Vision processing node for the Makara AUV.

This node handles object detection using various backends (Hailo-8L, YOLOv8, or Dummy)
depending on the available hardware. It subscribes to camera images and publishes
detections and debug images.
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from vision_msgs.msg import Detection2DArray, Detection2D
from cv_bridge import CvBridge
import cv2
import os

# Detect Hardware Availability
HAILO_AVAILABLE = False
try:
    import hailort
    HAILO_AVAILABLE = True
except ImportError:
    pass

YOLO_AVAILABLE = False
try:
    from ultralytics import YOLO
    YOLO_AVAILABLE = True
except ImportError:
    pass

class MakaraVisionNode(Node):
    """
    ROS 2 Node for visual perception using AI models.

    It automatically selects the best available AI backend (Hailo NPU or YOLO CPU)
    and processes incoming camera streams to detect objects.
    """
    def __init__(self):
        """
        Initializes the vision node, sets up publishers/subscribers, and selects backend.
        """
        super().__init__('makara_vision_node')
        self.bridge = CvBridge()
        
        # Subscriptions
        self.image_sub = self.create_subscription(
            Image,
            '/camera_driver/image_raw',
            self.image_callback,
            10)
            
        # Publishers
        self.detection_pub = self.create_publisher(Detection2DArray, '/makara/vision/detections', 10)
        self.debug_image_pub = self.create_publisher(Image, '/makara/vision/debug_image', 10)

        # Initialization and Backend Selection
        if HAILO_AVAILABLE:
            self.get_logger().info('NPU DETECTED: Initializing Hailo-8L (RPi 5 AI Hat) backend...')
            self.backend = 'hailo'
        elif YOLO_AVAILABLE:
            self.get_logger().info('LAPTOP DETECTED: Initializing Ultralytics YOLOv8 backend...')
            self.model = YOLO('yolov8n.pt')
            self.backend = 'ultralytics'
        else:
            self.get_logger().warning('No AI backend found! Using dummy detection for testing.')
            self.backend = 'dummy'

    def image_callback(self, msg):
        """
        Processes incoming images and performs object detection.

        Args:
            msg (Image): Incoming camera image message.
        """
        cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        detections = Detection2DArray()
        detections.header = msg.header

        if self.backend == 'ultralytics':
            # Inference using YOLOv8
            results = self.model(cv_image, verbose=False)
            for result in results:
                # Logic for extracting boxes and populating Detection2DArray
                pass
        elif self.backend == 'dummy':
            # Visual indicator for testing without a real model
            cv2.putText(cv_image, 'NO AI BACKEND FOUND', (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)

        # Publish results
        self.detection_pub.publish(detections)
        debug_msg = self.bridge.cv2_to_imgmsg(cv_image, 'bgr8')
        self.debug_image_pub.publish(debug_msg)

def main(args=None):
    """
    Main entry point for the Makara Vision node.
    """
    rclpy.init(args=args)
    node = MakaraVisionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
