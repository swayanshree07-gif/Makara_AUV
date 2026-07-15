// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/thruster_speeds.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__makara_interfaces__msg__ThrusterSpeeds __attribute__((deprecated))
#else
# define DEPRECATED__makara_interfaces__msg__ThrusterSpeeds __declspec(deprecated)
#endif

namespace makara_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrusterSpeeds_
{
  using Type = ThrusterSpeeds_<ContainerAllocator>;

  explicit ThrusterSpeeds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ThrusterSpeeds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _data_type data;
  using _reverse_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _reverse_type reverse;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__reverse(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->reverse = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator> *;
  using ConstRawPtr =
    const makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__makara_interfaces__msg__ThrusterSpeeds
    std::shared_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__makara_interfaces__msg__ThrusterSpeeds
    std::shared_ptr<makara_interfaces::msg::ThrusterSpeeds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrusterSpeeds_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrusterSpeeds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrusterSpeeds_

// alias to use template instance with default allocator
using ThrusterSpeeds =
  makara_interfaces::msg::ThrusterSpeeds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_HPP_
