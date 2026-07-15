// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hammerhead_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/pid.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__STRUCT_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hammerhead_interfaces__msg__PID __attribute__((deprecated))
#else
# define DEPRECATED__hammerhead_interfaces__msg__PID __declspec(deprecated)
#endif

namespace hammerhead_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PID_
{
  using Type = PID_<ContainerAllocator>;

  explicit PID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _kp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_type kp;
  using _ki_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ki_type ki;
  using _kd_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__kp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hammerhead_interfaces::msg::PID_<ContainerAllocator> *;
  using ConstRawPtr =
    const hammerhead_interfaces::msg::PID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::PID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::PID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hammerhead_interfaces__msg__PID
    std::shared_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hammerhead_interfaces__msg__PID
    std::shared_ptr<hammerhead_interfaces::msg::PID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PID_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const PID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PID_

// alias to use template instance with default allocator
using PID =
  hammerhead_interfaces::msg::PID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__STRUCT_HPP_
