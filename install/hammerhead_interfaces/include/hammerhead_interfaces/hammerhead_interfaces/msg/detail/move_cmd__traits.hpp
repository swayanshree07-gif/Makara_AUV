// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hammerhead_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/move_cmd.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMD__TRAITS_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hammerhead_interfaces/msg/detail/move_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hammerhead_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: surge
  {
    out << "surge: ";
    rosidl_generator_traits::value_to_yaml(msg.surge, out);
    out << ", ";
  }

  // member: surge_speed
  {
    out << "surge_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_speed, out);
    out << ", ";
  }

  // member: surge_time
  {
    out << "surge_time: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_time, out);
    out << ", ";
  }

  // member: is_surge
  {
    out << "is_surge: ";
    rosidl_generator_traits::value_to_yaml(msg.is_surge, out);
    out << ", ";
  }

  // member: sway
  {
    out << "sway: ";
    rosidl_generator_traits::value_to_yaml(msg.sway, out);
    out << ", ";
  }

  // member: sway_speed
  {
    out << "sway_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sway_speed, out);
    out << ", ";
  }

  // member: sway_time
  {
    out << "sway_time: ";
    rosidl_generator_traits::value_to_yaml(msg.sway_time, out);
    out << ", ";
  }

  // member: is_sway
  {
    out << "is_sway: ";
    rosidl_generator_traits::value_to_yaml(msg.is_sway, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: yaw_speed
  {
    out << "yaw_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_speed, out);
    out << ", ";
  }

  // member: yaw_time
  {
    out << "yaw_time: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_time, out);
    out << ", ";
  }

  // member: is_yaw
  {
    out << "is_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.is_yaw, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: depth_speed
  {
    out << "depth_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_speed, out);
    out << ", ";
  }

  // member: depth_time
  {
    out << "depth_time: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_time, out);
    out << ", ";
  }

  // member: is_depth
  {
    out << "is_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.is_depth, out);
    out << ", ";
  }

  // member: is_absolute
  {
    out << "is_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.is_absolute, out);
    out << ", ";
  }

  // member: wait_for_max_timer_to_timeout
  {
    out << "wait_for_max_timer_to_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_for_max_timer_to_timeout, out);
    out << ", ";
  }

  // member: mode_after_last_cmd
  {
    out << "mode_after_last_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_after_last_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: surge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge: ";
    rosidl_generator_traits::value_to_yaml(msg.surge, out);
    out << "\n";
  }

  // member: surge_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_speed, out);
    out << "\n";
  }

  // member: surge_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge_time: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_time, out);
    out << "\n";
  }

  // member: is_surge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_surge: ";
    rosidl_generator_traits::value_to_yaml(msg.is_surge, out);
    out << "\n";
  }

  // member: sway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sway: ";
    rosidl_generator_traits::value_to_yaml(msg.sway, out);
    out << "\n";
  }

  // member: sway_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sway_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sway_speed, out);
    out << "\n";
  }

  // member: sway_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sway_time: ";
    rosidl_generator_traits::value_to_yaml(msg.sway_time, out);
    out << "\n";
  }

  // member: is_sway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_sway: ";
    rosidl_generator_traits::value_to_yaml(msg.is_sway, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: yaw_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_speed, out);
    out << "\n";
  }

  // member: yaw_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_time: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_time, out);
    out << "\n";
  }

  // member: is_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.is_yaw, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: depth_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_speed, out);
    out << "\n";
  }

  // member: depth_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_time: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_time, out);
    out << "\n";
  }

  // member: is_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.is_depth, out);
    out << "\n";
  }

  // member: is_absolute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_absolute: ";
    rosidl_generator_traits::value_to_yaml(msg.is_absolute, out);
    out << "\n";
  }

  // member: wait_for_max_timer_to_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_for_max_timer_to_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_for_max_timer_to_timeout, out);
    out << "\n";
  }

  // member: mode_after_last_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_after_last_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_after_last_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hammerhead_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hammerhead_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hammerhead_interfaces::msg::MoveCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  hammerhead_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hammerhead_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hammerhead_interfaces::msg::MoveCmd & msg)
{
  return hammerhead_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hammerhead_interfaces::msg::MoveCmd>()
{
  return "hammerhead_interfaces::msg::MoveCmd";
}

template<>
inline const char * name<hammerhead_interfaces::msg::MoveCmd>()
{
  return "hammerhead_interfaces/msg/MoveCmd";
}

template<>
struct has_fixed_size<hammerhead_interfaces::msg::MoveCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hammerhead_interfaces::msg::MoveCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hammerhead_interfaces::msg::MoveCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMD__TRAITS_HPP_
