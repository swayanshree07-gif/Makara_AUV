// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hammerhead_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/thruster_speeds.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__TRAITS_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hammerhead_interfaces/msg/detail/thruster_speeds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hammerhead_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThrusterSpeeds & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reverse
  {
    if (msg.reverse.size() == 0) {
      out << "reverse: []";
    } else {
      out << "reverse: [";
      size_t pending_items = msg.reverse.size();
      for (auto item : msg.reverse) {
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
  const ThrusterSpeeds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reverse.size() == 0) {
      out << "reverse: []\n";
    } else {
      out << "reverse:\n";
      for (auto item : msg.reverse) {
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

inline std::string to_yaml(const ThrusterSpeeds & msg, bool use_flow_style = false)
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
  const hammerhead_interfaces::msg::ThrusterSpeeds & msg,
  std::ostream & out, size_t indentation = 0)
{
  hammerhead_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hammerhead_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hammerhead_interfaces::msg::ThrusterSpeeds & msg)
{
  return hammerhead_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hammerhead_interfaces::msg::ThrusterSpeeds>()
{
  return "hammerhead_interfaces::msg::ThrusterSpeeds";
}

template<>
inline const char * name<hammerhead_interfaces::msg::ThrusterSpeeds>()
{
  return "hammerhead_interfaces/msg/ThrusterSpeeds";
}

template<>
struct has_fixed_size<hammerhead_interfaces::msg::ThrusterSpeeds>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hammerhead_interfaces::msg::ThrusterSpeeds>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hammerhead_interfaces::msg::ThrusterSpeeds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__TRAITS_HPP_
