// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/thruster_speeds.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/thruster_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_ThrusterSpeeds_reverse
{
public:
  explicit Init_ThrusterSpeeds_reverse(::makara_interfaces::msg::ThrusterSpeeds & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::ThrusterSpeeds reverse(::makara_interfaces::msg::ThrusterSpeeds::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::ThrusterSpeeds msg_;
};

class Init_ThrusterSpeeds_data
{
public:
  Init_ThrusterSpeeds_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrusterSpeeds_reverse data(::makara_interfaces::msg::ThrusterSpeeds::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ThrusterSpeeds_reverse(msg_);
  }

private:
  ::makara_interfaces::msg::ThrusterSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::ThrusterSpeeds>()
{
  return makara_interfaces::msg::builder::Init_ThrusterSpeeds_data();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__BUILDER_HPP_
