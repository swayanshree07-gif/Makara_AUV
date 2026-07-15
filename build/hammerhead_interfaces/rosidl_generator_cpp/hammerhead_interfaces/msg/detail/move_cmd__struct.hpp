// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hammerhead_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/move_cmd.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMD__STRUCT_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hammerhead_interfaces__msg__MoveCmd __attribute__((deprecated))
#else
# define DEPRECATED__hammerhead_interfaces__msg__MoveCmd __declspec(deprecated)
#endif

namespace hammerhead_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveCmd_
{
  using Type = MoveCmd_<ContainerAllocator>;

  explicit MoveCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surge = 0.0f;
      this->surge_speed = 0.0f;
      this->surge_time = 0.0f;
      this->is_surge = 0;
      this->sway = 0.0f;
      this->sway_speed = 0.0f;
      this->sway_time = 0.0f;
      this->is_sway = 0;
      this->yaw = 0.0f;
      this->yaw_speed = 0.0f;
      this->yaw_time = 0.0f;
      this->is_yaw = 0;
      this->depth = 0.0f;
      this->depth_speed = 0.0f;
      this->depth_time = 0.0f;
      this->is_depth = 0;
      this->is_absolute = 0;
      this->wait_for_max_timer_to_timeout = 0;
      this->mode_after_last_cmd = 0;
    }
  }

  explicit MoveCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surge = 0.0f;
      this->surge_speed = 0.0f;
      this->surge_time = 0.0f;
      this->is_surge = 0;
      this->sway = 0.0f;
      this->sway_speed = 0.0f;
      this->sway_time = 0.0f;
      this->is_sway = 0;
      this->yaw = 0.0f;
      this->yaw_speed = 0.0f;
      this->yaw_time = 0.0f;
      this->is_yaw = 0;
      this->depth = 0.0f;
      this->depth_speed = 0.0f;
      this->depth_time = 0.0f;
      this->is_depth = 0;
      this->is_absolute = 0;
      this->wait_for_max_timer_to_timeout = 0;
      this->mode_after_last_cmd = 0;
    }
  }

  // field types and members
  using _surge_type =
    float;
  _surge_type surge;
  using _surge_speed_type =
    float;
  _surge_speed_type surge_speed;
  using _surge_time_type =
    float;
  _surge_time_type surge_time;
  using _is_surge_type =
    int8_t;
  _is_surge_type is_surge;
  using _sway_type =
    float;
  _sway_type sway;
  using _sway_speed_type =
    float;
  _sway_speed_type sway_speed;
  using _sway_time_type =
    float;
  _sway_time_type sway_time;
  using _is_sway_type =
    int8_t;
  _is_sway_type is_sway;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _yaw_speed_type =
    float;
  _yaw_speed_type yaw_speed;
  using _yaw_time_type =
    float;
  _yaw_time_type yaw_time;
  using _is_yaw_type =
    int8_t;
  _is_yaw_type is_yaw;
  using _depth_type =
    float;
  _depth_type depth;
  using _depth_speed_type =
    float;
  _depth_speed_type depth_speed;
  using _depth_time_type =
    float;
  _depth_time_type depth_time;
  using _is_depth_type =
    int8_t;
  _is_depth_type is_depth;
  using _is_absolute_type =
    int8_t;
  _is_absolute_type is_absolute;
  using _wait_for_max_timer_to_timeout_type =
    int8_t;
  _wait_for_max_timer_to_timeout_type wait_for_max_timer_to_timeout;
  using _mode_after_last_cmd_type =
    int8_t;
  _mode_after_last_cmd_type mode_after_last_cmd;

  // setters for named parameter idiom
  Type & set__surge(
    const float & _arg)
  {
    this->surge = _arg;
    return *this;
  }
  Type & set__surge_speed(
    const float & _arg)
  {
    this->surge_speed = _arg;
    return *this;
  }
  Type & set__surge_time(
    const float & _arg)
  {
    this->surge_time = _arg;
    return *this;
  }
  Type & set__is_surge(
    const int8_t & _arg)
  {
    this->is_surge = _arg;
    return *this;
  }
  Type & set__sway(
    const float & _arg)
  {
    this->sway = _arg;
    return *this;
  }
  Type & set__sway_speed(
    const float & _arg)
  {
    this->sway_speed = _arg;
    return *this;
  }
  Type & set__sway_time(
    const float & _arg)
  {
    this->sway_time = _arg;
    return *this;
  }
  Type & set__is_sway(
    const int8_t & _arg)
  {
    this->is_sway = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yaw_speed(
    const float & _arg)
  {
    this->yaw_speed = _arg;
    return *this;
  }
  Type & set__yaw_time(
    const float & _arg)
  {
    this->yaw_time = _arg;
    return *this;
  }
  Type & set__is_yaw(
    const int8_t & _arg)
  {
    this->is_yaw = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__depth_speed(
    const float & _arg)
  {
    this->depth_speed = _arg;
    return *this;
  }
  Type & set__depth_time(
    const float & _arg)
  {
    this->depth_time = _arg;
    return *this;
  }
  Type & set__is_depth(
    const int8_t & _arg)
  {
    this->is_depth = _arg;
    return *this;
  }
  Type & set__is_absolute(
    const int8_t & _arg)
  {
    this->is_absolute = _arg;
    return *this;
  }
  Type & set__wait_for_max_timer_to_timeout(
    const int8_t & _arg)
  {
    this->wait_for_max_timer_to_timeout = _arg;
    return *this;
  }
  Type & set__mode_after_last_cmd(
    const int8_t & _arg)
  {
    this->mode_after_last_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hammerhead_interfaces__msg__MoveCmd
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hammerhead_interfaces__msg__MoveCmd
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCmd_ & other) const
  {
    if (this->surge != other.surge) {
      return false;
    }
    if (this->surge_speed != other.surge_speed) {
      return false;
    }
    if (this->surge_time != other.surge_time) {
      return false;
    }
    if (this->is_surge != other.is_surge) {
      return false;
    }
    if (this->sway != other.sway) {
      return false;
    }
    if (this->sway_speed != other.sway_speed) {
      return false;
    }
    if (this->sway_time != other.sway_time) {
      return false;
    }
    if (this->is_sway != other.is_sway) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yaw_speed != other.yaw_speed) {
      return false;
    }
    if (this->yaw_time != other.yaw_time) {
      return false;
    }
    if (this->is_yaw != other.is_yaw) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->depth_speed != other.depth_speed) {
      return false;
    }
    if (this->depth_time != other.depth_time) {
      return false;
    }
    if (this->is_depth != other.is_depth) {
      return false;
    }
    if (this->is_absolute != other.is_absolute) {
      return false;
    }
    if (this->wait_for_max_timer_to_timeout != other.wait_for_max_timer_to_timeout) {
      return false;
    }
    if (this->mode_after_last_cmd != other.mode_after_last_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCmd_

// alias to use template instance with default allocator
using MoveCmd =
  hammerhead_interfaces::msg::MoveCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMD__STRUCT_HPP_
