// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/move_cmds.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/move_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_MoveCmds_list
{
public:
  explicit Init_MoveCmds_list(::hammerhead_interfaces::msg::MoveCmds & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::MoveCmds list(::hammerhead_interfaces::msg::MoveCmds::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::MoveCmds msg_;
};

class Init_MoveCmds_len
{
public:
  Init_MoveCmds_len()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCmds_list len(::hammerhead_interfaces::msg::MoveCmds::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_MoveCmds_list(msg_);
  }

private:
  ::hammerhead_interfaces::msg::MoveCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::MoveCmds>()
{
  return hammerhead_interfaces::msg::builder::Init_MoveCmds_len();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__BUILDER_HPP_
