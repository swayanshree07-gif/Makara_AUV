// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/move_cmds.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__TRAITS_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hammerhead_interfaces/msg/detail/move_cmds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'list'
#include "hammerhead_interfaces/msg/detail/move_cmd__traits.hpp"

namespace hammerhead_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveCmds & msg,
  std::ostream & out)
{
  out << "{";
  // member: len
  {
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << ", ";
  }

  // member: list
  {
    if (msg.list.size() == 0) {
      out << "list: []";
    } else {
      out << "list: [";
      size_t pending_items = msg.list.size();
      for (auto item : msg.list) {
        to_flow_style_yaml(item, out);
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
  const MoveCmds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << "\n";
  }

  // member: list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list.size() == 0) {
      out << "list: []\n";
    } else {
      out << "list:\n";
      for (auto item : msg.list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveCmds & msg, bool use_flow_style = false)
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
  const hammerhead_interfaces::msg::MoveCmds & msg,
  std::ostream & out, size_t indentation = 0)
{
  hammerhead_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hammerhead_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hammerhead_interfaces::msg::MoveCmds & msg)
{
  return hammerhead_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hammerhead_interfaces::msg::MoveCmds>()
{
  return "hammerhead_interfaces::msg::MoveCmds";
}

template<>
inline const char * name<hammerhead_interfaces::msg::MoveCmds>()
{
  return "hammerhead_interfaces/msg/MoveCmds";
}

template<>
struct has_fixed_size<hammerhead_interfaces::msg::MoveCmds>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hammerhead_interfaces::msg::MoveCmds>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hammerhead_interfaces::msg::MoveCmds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__TRAITS_HPP_
