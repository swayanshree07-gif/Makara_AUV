// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from makara_interfaces:msg/InsVel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/ins_vel.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__TRAITS_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "makara_interfaces/msg/detail/ins_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace makara_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const InsVel & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel
  {
    if (msg.vel.size() == 0) {
      out << "vel: []";
    } else {
      out << "vel: [";
      size_t pending_items = msg.vel.size();
      for (auto item : msg.vel) {
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
  const InsVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel.size() == 0) {
      out << "vel: []\n";
    } else {
      out << "vel:\n";
      for (auto item : msg.vel) {
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

inline std::string to_yaml(const InsVel & msg, bool use_flow_style = false)
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
  const makara_interfaces::msg::InsVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  makara_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use makara_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const makara_interfaces::msg::InsVel & msg)
{
  return makara_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<makara_interfaces::msg::InsVel>()
{
  return "makara_interfaces::msg::InsVel";
}

template<>
inline const char * name<makara_interfaces::msg::InsVel>()
{
  return "makara_interfaces/msg/InsVel";
}

template<>
struct has_fixed_size<makara_interfaces::msg::InsVel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<makara_interfaces::msg::InsVel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<makara_interfaces::msg::InsVel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__TRAITS_HPP_
