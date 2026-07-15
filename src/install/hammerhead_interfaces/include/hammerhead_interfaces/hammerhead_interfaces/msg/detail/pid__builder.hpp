// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/pid.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_PID_kd
{
public:
  explicit Init_PID_kd(::hammerhead_interfaces::msg::PID & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::PID kd(::hammerhead_interfaces::msg::PID::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::PID msg_;
};

class Init_PID_ki
{
public:
  explicit Init_PID_ki(::hammerhead_interfaces::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_kd ki(::hammerhead_interfaces::msg::PID::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PID_kd(msg_);
  }

private:
  ::hammerhead_interfaces::msg::PID msg_;
};

class Init_PID_kp
{
public:
  Init_PID_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_ki kp(::hammerhead_interfaces::msg::PID::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PID_ki(msg_);
  }

private:
  ::hammerhead_interfaces::msg::PID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::PID>()
{
  return hammerhead_interfaces::msg::builder::Init_PID_kp();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
