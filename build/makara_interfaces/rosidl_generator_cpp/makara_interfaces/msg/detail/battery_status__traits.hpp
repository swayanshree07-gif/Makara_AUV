// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from makara_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/battery_status.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "makara_interfaces/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace makara_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: battery1
  {
    if (msg.battery1.size() == 0) {
      out << "battery1: []";
    } else {
      out << "battery1: [";
      size_t pending_items = msg.battery1.size();
      for (auto item : msg.battery1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: battery2
  {
    if (msg.battery2.size() == 0) {
      out << "battery2: []";
    } else {
      out << "battery2: [";
      size_t pending_items = msg.battery2.size();
      for (auto item : msg.battery2) {
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
  const BatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: battery1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery1.size() == 0) {
      out << "battery1: []\n";
    } else {
      out << "battery1:\n";
      for (auto item : msg.battery1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: battery2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery2.size() == 0) {
      out << "battery2: []\n";
    } else {
      out << "battery2:\n";
      for (auto item : msg.battery2) {
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

inline std::string to_yaml(const BatteryStatus & msg, bool use_flow_style = false)
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

}  // namespace makara_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use makara_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const makara_interfaces::msg::BatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  makara_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use makara_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const makara_interfaces::msg::BatteryStatus & msg)
{
  return makara_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<makara_interfaces::msg::BatteryStatus>()
{
  return "makara_interfaces::msg::BatteryStatus";
}

template<>
inline const char * name<makara_interfaces::msg::BatteryStatus>()
{
  return "makara_interfaces/msg/BatteryStatus";
}

template<>
struct has_fixed_size<makara_interfaces::msg::BatteryStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<makara_interfaces::msg::BatteryStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<makara_interfaces::msg::BatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
