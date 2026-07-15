// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/thruster_speeds.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/thruster_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_ThrusterSpeeds_reverse
{
public:
  explicit Init_ThrusterSpeeds_reverse(::hammerhead_interfaces::msg::ThrusterSpeeds & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::ThrusterSpeeds reverse(::hammerhead_interfaces::msg::ThrusterSpeeds::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::ThrusterSpeeds msg_;
};

class Init_ThrusterSpeeds_data
{
public:
  Init_ThrusterSpeeds_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrusterSpeeds_reverse data(::hammerhead_interfaces::msg::ThrusterSpeeds::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ThrusterSpeeds_reverse(msg_);
  }

private:
  ::hammerhead_interfaces::msg::ThrusterSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::ThrusterSpeeds>()
{
  return hammerhead_interfaces::msg::builder::Init_ThrusterSpeeds_data();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__BUILDER_HPP_
