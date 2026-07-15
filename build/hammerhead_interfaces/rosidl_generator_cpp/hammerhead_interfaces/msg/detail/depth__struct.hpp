// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hammerhead_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/depth.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__STRUCT_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hammerhead_interfaces__msg__Depth __attribute__((deprecated))
#else
# define DEPRECATED__hammerhead_interfaces__msg__Depth __declspec(deprecated)
#endif

namespace hammerhead_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Depth_
{
  using Type = Depth_<ContainerAllocator>;

  explicit Depth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0f;
    }
  }

  explicit Depth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _depth_type =
    float;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hammerhead_interfaces::msg::Depth_<ContainerAllocator> *;
  using ConstRawPtr =
    const hammerhead_interfaces::msg::Depth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::Depth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::Depth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hammerhead_interfaces__msg__Depth
    std::shared_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hammerhead_interfaces__msg__Depth
    std::shared_ptr<hammerhead_interfaces::msg::Depth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Depth_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const Depth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Depth_

// alias to use template instance with default allocator
using Depth =
  hammerhead_interfaces::msg::Depth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__STRUCT_HPP_
