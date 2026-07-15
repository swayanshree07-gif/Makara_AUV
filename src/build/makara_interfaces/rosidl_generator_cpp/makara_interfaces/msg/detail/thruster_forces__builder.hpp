// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/ThrusterForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/thruster_forces.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_FORCES__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_FORCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/thruster_forces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_ThrusterForces_data
{
public:
  Init_ThrusterForces_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::makara_interfaces::msg::ThrusterForces data(::makara_interfaces::msg::ThrusterForces::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::ThrusterForces msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::ThrusterForces>()
{
  return makara_interfaces::msg::builder::Init_ThrusterForces_data();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_FORCES__BUILDER_HPP_
