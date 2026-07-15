// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/move_cmds.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMDS__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/move_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_MoveCmds_list
{
public:
  explicit Init_MoveCmds_list(::makara_interfaces::msg::MoveCmds & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::MoveCmds list(::makara_interfaces::msg::MoveCmds::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmds msg_;
};

class Init_MoveCmds_len
{
public:
  Init_MoveCmds_len()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCmds_list len(::makara_interfaces::msg::MoveCmds::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_MoveCmds_list(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::MoveCmds>()
{
  return makara_interfaces::msg::builder::Init_MoveCmds_len();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMDS__BUILDER_HPP_
