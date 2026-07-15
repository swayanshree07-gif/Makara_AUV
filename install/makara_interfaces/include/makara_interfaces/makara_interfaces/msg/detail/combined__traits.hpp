// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from makara_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/combined.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__COMBINED__TRAITS_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__COMBINED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "makara_interfaces/msg/detail/combined__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace makara_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Combined & msg,
  std::ostream & out)
{
  out << "{";
  // member: angular
  {
    if (msg.angular.size() == 0) {
      out << "angular: []";
    } else {
      out << "angular: [";
      size_t pending_items = msg.angular.size();
      for (auto item : msg.angular) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: linear
  {
    if (msg.linear.size() == 0) {
      out << "linear: []";
    } else {
      out << "linear: [";
      size_t pending_items = msg.linear.size();
      for (auto item : msg.linear) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Combined & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular.size() == 0) {
      out << "angular: []\n";
    } else {
      out << "angular:\n";
      for (auto item : msg.angular) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear.size() == 0) {
      out << "linear: []\n";
    } else {
      out << "linear:\n";
      for (auto item : msg.linear) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Combined & msg, bool use_flow_style = false)
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
  const makara_interfaces::msg::Combined & msg,
  std::ostream & out, size_t indentation = 0)
{
  makara_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use makara_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const makara_interfaces::msg::Combined & msg)
{
  return makara_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<makara_interfaces::msg::Combined>()
{
  return "makara_interfaces::msg::Combined";
}

template<>
inline const char * name<makara_interfaces::msg::Combined>()
{
  return "makara_interfaces/msg/Combined";
}

template<>
struct has_fixed_size<makara_interfaces::msg::Combined>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<makara_interfaces::msg::Combined>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<makara_interfaces::msg::Combined>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAKARA_INTERFACES__MSG__DETAIL__COMBINED__TRAITS_HPP_
