# Use the official ROS 2 Humble base image
FROM ros:humble-ros-base

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive

# Install system dependencies
RUN apt-get update && apt-get install -y \
    python3-pip \
    usbutils \
    v4l-utils \
    python3-opencv \
    ros-humble-ros-gz \
    ros-humble-spinnaker-camera-driver \
    ros-humble-rqt-image-view \
    ros-humble-vision-msgs \
    && rm -rf /var/lib/apt/lists/*

# Install AI dependencies (YOLO)
# Note: This is a heavy layer. For RPi 5, we'd add HailoRT here.
RUN pip3 install ultralytics

# Create workspace
WORKDIR /ros2_ws
COPY src /ros2_ws/src

# Build the workspace
RUN . /opt/ros/humble/setup.sh && \
    colcon build --symlink-install

# Set up entrypoint
COPY parameters.yaml /ros2_ws/parameters.yaml
RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc && \
    echo "source /ros2_ws/install/setup.bash" >> ~/.bashrc

ENTRYPOINT ["/ros_entrypoint.sh"]
CMD ["bash"]
