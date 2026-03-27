cmake_minimum_required(VERSION 3.8)
project(hammerhead_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

set(msg_files
  "msg/BatteryStatus.msg"
  "msg/Combined.msg"
  "msg/Depth.msg"
  "msg/InsVel.msg"
  "msg/MoveCmd.msg"
  "msg/MoveCmds.msg"
  "msg/PID.msg"
  "msg/Position.msg"
  "msg/Setpoint.msg"
  "msg/ThrusterSpeeds.msg"
  "msg/VectorNavData.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES std_msgs
)

ament_package()
