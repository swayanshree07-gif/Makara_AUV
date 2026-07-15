// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/combined.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__COMBINED__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__COMBINED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/combined__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_Combined_depth
{
public:
  explicit Init_Combined_depth(::makara_interfaces::msg::Combined & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::Combined depth(::makara_interfaces::msg::Combined::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::Combined msg_;
};

class Init_Combined_linear
{
public:
  explicit Init_Combined_linear(::makara_interfaces::msg::Combined & msg)
  : msg_(msg)
  {}
  Init_Combined_depth linear(::makara_interfaces::msg::Combined::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Combined_depth(msg_);
  }

private:
  ::makara_interfaces::msg::Combined msg_;
};

class Init_Combined_angular
{
public:
  Init_Combined_angular()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Combined_linear angular(::makara_interfaces::msg::Combined::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return Init_Combined_linear(msg_);
  }

private:
  ::makara_interfaces::msg::Combined msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::Combined>()
{
  return makara_interfaces::msg::builder::Init_Combined_angular();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__COMBINED__BUILDER_HPP_
