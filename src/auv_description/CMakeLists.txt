cmake_minimum_required(VERSION 3.8)
project(auv_description)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

install(
  DIRECTORY launch urdf worlds
  DESTINATION share/auv_description
)

install(
  PROGRAMS 
    auv_description/thruster_mixer.py
    auv_description/sim_bridge.py
    auv_description/setpoint_publisher.py
    auv_description/pid_publisher.py
    auv_description/makara_gui.py
  DESTINATION lib/auv_description
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
