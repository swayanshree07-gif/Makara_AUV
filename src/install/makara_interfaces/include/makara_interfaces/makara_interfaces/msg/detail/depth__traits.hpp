// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from makara_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/depth.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__DEPTH__TRAITS_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__DEPTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "makara_interfaces/msg/detail/depth__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace makara_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Depth & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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
  const Depth & msg,
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

inline std::string to_yaml(const Depth & msg, bool use_flow_style = false)
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
  const makara_interfaces::msg::Depth & msg,
  std::ostream & out, size_t indentation = 0)
{
  makara_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use makara_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const makara_interfaces::msg::Depth & msg)
{
  return makara_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<makara_interfaces::msg::Depth>()
{
  return "makara_interfaces::msg::Depth";
}

template<>
inline const char * name<makara_interfaces::msg::Depth>()
{
  return "makara_interfaces/msg/Depth";
}

template<>
struct has_fixed_size<makara_interfaces::msg::Depth>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<makara_interfaces::msg::Depth>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<makara_interfaces::msg::Depth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAKARA_INTERFACES__MSG__DETAIL__DEPTH__TRAITS_HPP_
