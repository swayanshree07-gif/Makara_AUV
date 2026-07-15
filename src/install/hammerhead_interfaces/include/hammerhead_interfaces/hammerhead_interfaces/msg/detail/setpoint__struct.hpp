// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hammerhead_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/setpoint.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__SETPOINT__STRUCT_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hammerhead_interfaces__msg__Setpoint __attribute__((deprecated))
#else
# define DEPRECATED__hammerhead_interfaces__msg__Setpoint __declspec(deprecated)
#endif

namespace hammerhead_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Setpoint_
{
  using Type = Setpoint_<ContainerAllocator>;

  explicit Setpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Setpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _setpoints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _setpoints_type setpoints;
  using _joy_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _joy_type joy;

  // setters for named parameter idiom
  Type & set__setpoints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->setpoints = _arg;
    return *this;
  }
  Type & set__joy(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->joy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hammerhead_interfaces::msg::Setpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const hammerhead_interfaces::msg::Setpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::Setpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::Setpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hammerhead_interfaces__msg__Setpoint
    std::shared_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hammerhead_interfaces__msg__Setpoint
    std::shared_ptr<hammerhead_interfaces::msg::Setpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Setpoint_ & other) const
  {
    if (this->setpoints != other.setpoints) {
      return false;
    }
    if (this->joy != other.joy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Setpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Setpoint_

// alias to use template instance with default allocator
using Setpoint =
  hammerhead_interfaces::msg::Setpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__SETPOINT__STRUCT_HPP_
