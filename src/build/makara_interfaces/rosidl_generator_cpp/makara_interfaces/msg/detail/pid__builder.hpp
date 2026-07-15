// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/pid.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_PID_kd
{
public:
  explicit Init_PID_kd(::makara_interfaces::msg::PID & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::PID kd(::makara_interfaces::msg::PID::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::PID msg_;
};

class Init_PID_ki
{
public:
  explicit Init_PID_ki(::makara_interfaces::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_kd ki(::makara_interfaces::msg::PID::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PID_kd(msg_);
  }

private:
  ::makara_interfaces::msg::PID msg_;
};

class Init_PID_kp
{
public:
  Init_PID_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_ki kp(::makara_interfaces::msg::PID::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PID_ki(msg_);
  }

private:
  ::makara_interfaces::msg::PID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::PID>()
{
  return makara_interfaces::msg::builder::Init_PID_kp();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
