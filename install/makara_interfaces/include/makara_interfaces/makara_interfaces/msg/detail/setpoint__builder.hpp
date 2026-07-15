// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/setpoint.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_Setpoint_joy
{
public:
  explicit Init_Setpoint_joy(::makara_interfaces::msg::Setpoint & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::Setpoint joy(::makara_interfaces::msg::Setpoint::_joy_type arg)
  {
    msg_.joy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::Setpoint msg_;
};

class Init_Setpoint_setpoints
{
public:
  Init_Setpoint_setpoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Setpoint_joy setpoints(::makara_interfaces::msg::Setpoint::_setpoints_type arg)
  {
    msg_.setpoints = std::move(arg);
    return Init_Setpoint_joy(msg_);
  }

private:
  ::makara_interfaces::msg::Setpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::Setpoint>()
{
  return makara_interfaces::msg::builder::Init_Setpoint_setpoints();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__BUILDER_HPP_
