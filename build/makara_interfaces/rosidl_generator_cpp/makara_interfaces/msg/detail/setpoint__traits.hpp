// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from makara_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/setpoint.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__TRAITS_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "makara_interfaces/msg/detail/setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace makara_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Setpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: setpoints
  {
    if (msg.setpoints.size() == 0) {
      out << "setpoints: []";
    } else {
      out << "setpoints: [";
      size_t pending_items = msg.setpoints.size();
      for (auto item : msg.setpoints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joy
  {
    if (msg.joy.size() == 0) {
      out << "joy: []";
    } else {
      out << "joy: [";
      size_t pending_items = msg.joy.size();
      for (auto item : msg.joy) {
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
  const Setpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: setpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.setpoints.size() == 0) {
      out << "setpoints: []\n";
    } else {
      out << "setpoints:\n";
      for (auto item : msg.setpoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joy.size() == 0) {
      out << "joy: []\n";
    } else {
      out << "joy:\n";
      for (auto item : msg.joy) {
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

inline std::string to_yaml(const Setpoint & msg, bool use_flow_style = false)
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
  const makara_interfaces::msg::Setpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  makara_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use makara_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const makara_interfaces::msg::Setpoint & msg)
{
  return makara_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<makara_interfaces::msg::Setpoint>()
{
  return "makara_interfaces::msg::Setpoint";
}

template<>
inline const char * name<makara_interfaces::msg::Setpoint>()
{
  return "makara_interfaces/msg/Setpoint";
}

template<>
struct has_fixed_size<makara_interfaces::msg::Setpoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<makara_interfaces::msg::Setpoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<makara_interfaces::msg::Setpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__TRAITS_HPP_
