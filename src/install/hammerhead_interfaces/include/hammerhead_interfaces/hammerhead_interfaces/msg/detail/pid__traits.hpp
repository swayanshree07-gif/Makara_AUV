// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hammerhead_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/pid.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hammerhead_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hammerhead_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PID & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    if (msg.kp.size() == 0) {
      out << "kp: []";
    } else {
      out << "kp: [";
      size_t pending_items = msg.kp.size();
      for (auto item : msg.kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ki
  {
    if (msg.ki.size() == 0) {
      out << "ki: []";
    } else {
      out << "ki: [";
      size_t pending_items = msg.ki.size();
      for (auto item : msg.ki) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kd
  {
    if (msg.kd.size() == 0) {
      out << "kd: []";
    } else {
      out << "kd: [";
      size_t pending_items = msg.kd.size();
      for (auto item : msg.kd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp.size() == 0) {
      out << "kp: []\n";
    } else {
      out << "kp:\n";
      for (auto item : msg.kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ki.size() == 0) {
      out << "ki: []\n";
    } else {
      out << "ki:\n";
      for (auto item : msg.ki) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kd.size() == 0) {
      out << "kd: []\n";
    } else {
      out << "kd:\n";
      for (auto item : msg.kd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PID & msg, bool use_flow_style = false)
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
  const hammerhead_interfaces::msg::PID & msg,
  std::ostream & out, size_t indentation = 0)
{
  hammerhead_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hammerhead_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hammerhead_interfaces::msg::PID & msg)
{
  return hammerhead_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hammerhead_interfaces::msg::PID>()
{
  return "hammerhead_interfaces::msg::PID";
}

template<>
inline const char * name<hammerhead_interfaces::msg::PID>()
{
  return "hammerhead_interfaces/msg/PID";
}

template<>
struct has_fixed_size<hammerhead_interfaces::msg::PID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hammerhead_interfaces::msg::PID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hammerhead_interfaces::msg::PID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_
