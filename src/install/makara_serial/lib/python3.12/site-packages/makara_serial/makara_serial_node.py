#!/usr/bin/env python3
"""
Node for serial communication between ROS 2 and the Makara AUV hardware.

This node handles low-level communication with the NUC/Nano microcontrollers,
reading sensor data (depth, battery, IMU) and sending actuator commands
(thrusters, ball drop, pickers, etc.) via a custom character-based protocol.
"""

import rclpy
from rclpy.node import Node
import serial
import threading
from std_msgs.msg import Int8, String
from makara_interfaces.msg import Depth, BatteryStatus, VectorNavData

class SerialNode(Node):
    """
    ROS 2 Node for serial interfacing with on-board hardware.

    It runs a dedicated thread to read from the serial port and publishes
    parsed sensor data. It also subscribes to actuator commands and writes
    them to the serial port.
    """
    def __init__(self):
        """
        Initializes the SerialNode, opens the serial port, and sets up publishers/subscribers.
        """
        super().__init__('makara_serial')
        
        # Parameters
        self.declare_parameter('port', '/dev/nuc_nano')
        self.declare_parameter('baud', 9600)
        
        port_param = self.get_parameter('port').get_parameter_value().string_value
        baud_param = self.get_parameter('baud').get_parameter_value().integer_value
        
        try:
            self.ser = serial.Serial(port_param, baud_param, timeout=1.0)
            self.get_logger().info(f"Opened serial port {port_param} at {baud_param} baud")
        except Exception as e:
            self.get_logger().error(f"Failed to open serial port {port_param}: {e}")
            self.ser = None

        # Publishers for sensor data
        self.pub_depth = self.create_publisher(Depth, '/depth', 10)
        self.pub_bno = self.create_publisher(VectorNavData, '/bno055', 10)
        self.pub_voltage = self.create_publisher(BatteryStatus, '/battery_status', 10)
        self.pub_local = self.create_publisher(Int8, '/watchdog_local', 10)
        self.pub_start_mission = self.create_publisher(Int8, '/mission', 10)

        # Subscribers for actuator control
        self.create_subscription(Int8, '/thruster_status', self.status_callback, 10)
        self.create_subscription(Int8, '/actuator/ball_drop', self.ball_drop_callback, 10)
        self.create_subscription(Int8, '/actuator/picker_descend', self.picker_descend_callback, 10)
        self.create_subscription(Int8, '/actuator/picker_ascend', self.picker_ascend_callback, 10)
        self.create_subscription(Int8, '/actuator/dildo_shoot', self.dildo_shoot_callback, 10)

        # Timer for watchdog local (30Hz) to signal node health
        self.timer = self.create_timer(1.0/30.0, self.timer_callback)

        # Serial reading thread to avoid blocking the ROS main loop
        self.running = True
        self.thread = threading.Thread(target=self.receive_thread)
        self.thread.start()

    def timer_callback(self):
        """Publishes a watchdog signal at a fixed frequency."""
        local_data = Int8()
        local_data.data = 1
        self.pub_local.publish(local_data)

    def status_callback(self, msg):
        """Sends thruster status command over serial."""
        if self.ser:
            command = f'S{msg.data}#'
            self.ser.write(command.encode())

    def ball_drop_callback(self, msg):
        """Sends ball drop command over serial."""
        if self.ser:
            command = f'B{msg.data}#'
            self.ser.write(command.encode())
            self.get_logger().info(f"Sent: {command}")

    def picker_descend_callback(self, msg):
        """Sends picker descend command over serial."""
        if self.ser:
            command = 'D1#'
            self.ser.write(command.encode())
            self.get_logger().info(f"Sent: {command}")

    def picker_ascend_callback(self, msg):
        """Sends picker ascend command over serial."""
        if self.ser:
            command = 'A1#'
            self.ser.write(command.encode())
            self.get_logger().info(f"Sent: {command}")

    def dildo_shoot_callback(self, msg):
        """Sends shooter/dildo command over serial."""
        if self.ser:
            command = f'T{msg.data}#'
            self.ser.write(command.encode())
            self.get_logger().info(f"Sent: {command}")

    def receive_thread(self):
        """
        Target function for the serial receiver thread.

        Reads lines from serial, parses data based on character prefixes 
        (e.g., 'D' for depth, 'Y' for yaw), and populates an array for publication.
        """
        if not self.ser:
            return
            
        # Mapping characters to array indices for internal storage
        dic = {'D': 0, 'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'Y': 9, 'P': 10, 'R': 11, 'S': 12}
        
        while self.running and rclpy.ok():
            try:
                if self.ser.in_waiting > 0:
                    line = self.ser.readline().decode('utf-8', errors='ignore').strip()
                    if not line:
                        continue
                        
                    input_arr = [-1.0] * 13
                    current_char = ""
                    current_value = ""
                    check = -1

                    for char in line:
                        if char.isalpha():
                            current_char = char
                            current_value = ""
                            check = 0
                        elif check == 0 and (char.isdigit() or char == '-' or char == '.'):
                            current_value += char
                        elif char == '#':
                            if current_char in dic and current_value:
                                try:
                                    input_arr[dic[current_char]] = float(current_value)
                                except ValueError:
                                    pass
                            current_char = ""
                            current_value = ""
                            check = -1

                    self.publish_data(input_arr)
            except Exception as e:
                self.get_logger().error(f"Error in receive thread: {e}")

    def publish_data(self, input_arr):
        """
        Publishes the parsed serial data to relevant ROS 2 topics.

        Args:
            input_arr (list): List of floats parsed from the serial line.
        """
        now = self.get_clock().now().to_msg()

        # Depth data
        if input_arr[0] != -1.0:
            depth = Depth()
            depth.header.stamp = now
            depth.depth = input_arr[0]
            self.pub_depth.publish(depth)

        # Battery status (8 cells across 2 batteries)
        if input_arr[1] != -1.0:
            voltage_msg = BatteryStatus()
            voltage_msg.header.stamp = now
            voltage_msg.battery1 = [float(input_arr[1]), float(input_arr[2]), float(input_arr[3]), float(input_arr[4])]
            voltage_msg.battery2 = [float(input_arr[5]), float(input_arr[6]), float(input_arr[7]), float(input_arr[8])]
            self.pub_voltage.publish(voltage_msg)

        # Orientation data (VectorNav / BNO)
        if input_arr[9] != -1.0:
            bno = VectorNavData()
            bno.header.stamp = now
            # Orientation: [yaw, pitch, roll]
            bno.orientation = [float(input_arr[11]), float(input_arr[10]), float(input_arr[9])]
            self.pub_bno.publish(bno)

        # Mission status / Start switch
        if input_arr[12] != -1.0:
            start_msg = Int8()
            start_msg.data = int(input_arr[12])
            self.pub_start_mission.publish(start_msg)

    def stop(self):
        """Shuts down the receiver thread and closes the serial port."""
        self.running = False
        if self.thread.is_alive():
            self.thread.join(timeout=2.0)
        if self.ser:
            self.ser.close()

def main(args=None):
    """Main entry point for the Makara Serial node."""
    rclpy.init(args=args)
    node = None
    try:
        node = SerialNode()
        rclpy.spin(node)
    except Exception as e:
        print(f"Node execution failed: {e}")
    finally:
        if node:
            node.stop()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
