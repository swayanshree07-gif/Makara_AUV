// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/setpoint.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__SETPOINT__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_Setpoint_joy
{
public:
  explicit Init_Setpoint_joy(::hammerhead_interfaces::msg::Setpoint & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::Setpoint joy(::hammerhead_interfaces::msg::Setpoint::_joy_type arg)
  {
    msg_.joy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Setpoint msg_;
};

class Init_Setpoint_setpoints
{
public:
  Init_Setpoint_setpoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Setpoint_joy setpoints(::hammerhead_interfaces::msg::Setpoint::_setpoints_type arg)
  {
    msg_.setpoints = std::move(arg);
    return Init_Setpoint_joy(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Setpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::Setpoint>()
{
  return hammerhead_interfaces::msg::builder::Init_Setpoint_setpoints();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__SETPOINT__BUILDER_HPP_
