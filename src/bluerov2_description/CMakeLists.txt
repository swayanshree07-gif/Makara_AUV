cmake_minimum_required(VERSION 3.5)
project(bluerov2_description)

## Find ament package (ROS2)
find_package(ament_cmake REQUIRED)

################################################
## Install section (IMPORTANT)
################################################

## Install all resource folders
install(
  DIRECTORY launch meshes robots urdf
  DESTINATION share/${PROJECT_NAME}
)

################################################
## ament package (ROS2 equivalent of catkin_package)
################################################

ament_package()
