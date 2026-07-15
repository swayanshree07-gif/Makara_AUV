// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/position.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_yaw
{
public:
  explicit Init_Position_yaw(::hammerhead_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::Position yaw(::hammerhead_interfaces::msg::Position::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Position msg_;
};

class Init_Position_pitch
{
public:
  explicit Init_Position_pitch(::hammerhead_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_yaw pitch(::hammerhead_interfaces::msg::Position::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Position_yaw(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Position msg_;
};

class Init_Position_roll
{
public:
  explicit Init_Position_roll(::hammerhead_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_pitch roll(::hammerhead_interfaces::msg::Position::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Position_pitch(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Position msg_;
};

class Init_Position_z
{
public:
  explicit Init_Position_z(::hammerhead_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_roll z(::hammerhead_interfaces::msg::Position::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Position_roll(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::hammerhead_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_z y(::hammerhead_interfaces::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_z(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::hammerhead_interfaces::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::Position>()
{
  return hammerhead_interfaces::msg::builder::Init_Position_x();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
