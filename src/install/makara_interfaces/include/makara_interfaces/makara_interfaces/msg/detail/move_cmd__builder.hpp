// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/move_cmd.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMD__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/move_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_MoveCmd_mode_after_last_cmd
{
public:
  explicit Init_MoveCmd_mode_after_last_cmd(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::MoveCmd mode_after_last_cmd(::makara_interfaces::msg::MoveCmd::_mode_after_last_cmd_type arg)
  {
    msg_.mode_after_last_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_wait_for_max_timer_to_timeout
{
public:
  explicit Init_MoveCmd_wait_for_max_timer_to_timeout(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_mode_after_last_cmd wait_for_max_timer_to_timeout(::makara_interfaces::msg::MoveCmd::_wait_for_max_timer_to_timeout_type arg)
  {
    msg_.wait_for_max_timer_to_timeout = std::move(arg);
    return Init_MoveCmd_mode_after_last_cmd(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_is_absolute
{
public:
  explicit Init_MoveCmd_is_absolute(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_wait_for_max_timer_to_timeout is_absolute(::makara_interfaces::msg::MoveCmd::_is_absolute_type arg)
  {
    msg_.is_absolute = std::move(arg);
    return Init_MoveCmd_wait_for_max_timer_to_timeout(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_is_depth
{
public:
  explicit Init_MoveCmd_is_depth(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_is_absolute is_depth(::makara_interfaces::msg::MoveCmd::_is_depth_type arg)
  {
    msg_.is_depth = std::move(arg);
    return Init_MoveCmd_is_absolute(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_depth_time
{
public:
  explicit Init_MoveCmd_depth_time(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_is_depth depth_time(::makara_interfaces::msg::MoveCmd::_depth_time_type arg)
  {
    msg_.depth_time = std::move(arg);
    return Init_MoveCmd_is_depth(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_depth_speed
{
public:
  explicit Init_MoveCmd_depth_speed(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_depth_time depth_speed(::makara_interfaces::msg::MoveCmd::_depth_speed_type arg)
  {
    msg_.depth_speed = std::move(arg);
    return Init_MoveCmd_depth_time(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_depth
{
public:
  explicit Init_MoveCmd_depth(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_depth_speed depth(::makara_interfaces::msg::MoveCmd::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_MoveCmd_depth_speed(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_is_yaw
{
public:
  explicit Init_MoveCmd_is_yaw(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_depth is_yaw(::makara_interfaces::msg::MoveCmd::_is_yaw_type arg)
  {
    msg_.is_yaw = std::move(arg);
    return Init_MoveCmd_depth(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_yaw_time
{
public:
  explicit Init_MoveCmd_yaw_time(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_is_yaw yaw_time(::makara_interfaces::msg::MoveCmd::_yaw_time_type arg)
  {
    msg_.yaw_time = std::move(arg);
    return Init_MoveCmd_is_yaw(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_yaw_speed
{
public:
  explicit Init_MoveCmd_yaw_speed(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_yaw_time yaw_speed(::makara_interfaces::msg::MoveCmd::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return Init_MoveCmd_yaw_time(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_yaw
{
public:
  explicit Init_MoveCmd_yaw(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_yaw_speed yaw(::makara_interfaces::msg::MoveCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MoveCmd_yaw_speed(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_is_sway
{
public:
  explicit Init_MoveCmd_is_sway(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_yaw is_sway(::makara_interfaces::msg::MoveCmd::_is_sway_type arg)
  {
    msg_.is_sway = std::move(arg);
    return Init_MoveCmd_yaw(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_sway_time
{
public:
  explicit Init_MoveCmd_sway_time(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_is_sway sway_time(::makara_interfaces::msg::MoveCmd::_sway_time_type arg)
  {
    msg_.sway_time = std::move(arg);
    return Init_MoveCmd_is_sway(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_sway_speed
{
public:
  explicit Init_MoveCmd_sway_speed(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_sway_time sway_speed(::makara_interfaces::msg::MoveCmd::_sway_speed_type arg)
  {
    msg_.sway_speed = std::move(arg);
    return Init_MoveCmd_sway_time(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_sway
{
public:
  explicit Init_MoveCmd_sway(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_sway_speed sway(::makara_interfaces::msg::MoveCmd::_sway_type arg)
  {
    msg_.sway = std::move(arg);
    return Init_MoveCmd_sway_speed(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_is_surge
{
public:
  explicit Init_MoveCmd_is_surge(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_sway is_surge(::makara_interfaces::msg::MoveCmd::_is_surge_type arg)
  {
    msg_.is_surge = std::move(arg);
    return Init_MoveCmd_sway(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_surge_time
{
public:
  explicit Init_MoveCmd_surge_time(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_is_surge surge_time(::makara_interfaces::msg::MoveCmd::_surge_time_type arg)
  {
    msg_.surge_time = std::move(arg);
    return Init_MoveCmd_is_surge(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_surge_speed
{
public:
  explicit Init_MoveCmd_surge_speed(::makara_interfaces::msg::MoveCmd & msg)
  : msg_(msg)
  {}
  Init_MoveCmd_surge_time surge_speed(::makara_interfaces::msg::MoveCmd::_surge_speed_type arg)
  {
    msg_.surge_speed = std::move(arg);
    return Init_MoveCmd_surge_time(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

class Init_MoveCmd_surge
{
public:
  Init_MoveCmd_surge()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCmd_surge_speed surge(::makara_interfaces::msg::MoveCmd::_surge_type arg)
  {
    msg_.surge = std::move(arg);
    return Init_MoveCmd_surge_speed(msg_);
  }

private:
  ::makara_interfaces::msg::MoveCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::MoveCmd>()
{
  return makara_interfaces::msg::builder::Init_MoveCmd_surge();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMD__BUILDER_HPP_
