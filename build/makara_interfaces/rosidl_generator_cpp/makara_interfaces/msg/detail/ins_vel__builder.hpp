// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/InsVel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/ins_vel.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/ins_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_InsVel_vel
{
public:
  Init_InsVel_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::makara_interfaces::msg::InsVel vel(::makara_interfaces::msg::InsVel::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::InsVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::InsVel>()
{
  return makara_interfaces::msg::builder::Init_InsVel_vel();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__BUILDER_HPP_
