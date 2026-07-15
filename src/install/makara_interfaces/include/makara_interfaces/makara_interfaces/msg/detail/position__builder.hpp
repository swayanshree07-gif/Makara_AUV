// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/position.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_yaw
{
public:
  explicit Init_Position_yaw(::makara_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::Position yaw(::makara_interfaces::msg::Position::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::Position msg_;
};

class Init_Position_pitch
{
public:
  explicit Init_Position_pitch(::makara_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_yaw pitch(::makara_interfaces::msg::Position::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Position_yaw(msg_);
  }

private:
  ::makara_interfaces::msg::Position msg_;
};

class Init_Position_roll
{
public:
  explicit Init_Position_roll(::makara_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_pitch roll(::makara_interfaces::msg::Position::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Position_pitch(msg_);
  }

private:
  ::makara_interfaces::msg::Position msg_;
};

class Init_Position_z
{
public:
  explicit Init_Position_z(::makara_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_roll z(::makara_interfaces::msg::Position::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Position_roll(msg_);
  }

private:
  ::makara_interfaces::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::makara_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_z y(::makara_interfaces::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_z(msg_);
  }

private:
  ::makara_interfaces::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::makara_interfaces::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::makara_interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::Position>()
{
  return makara_interfaces::msg::builder::Init_Position_x();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
