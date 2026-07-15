// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hammerhead_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/vector_nav_data.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__STRUCT_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__STRUCT_HPP_

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
# define DEPRECATED__hammerhead_interfaces__msg__VectorNavData __attribute__((deprecated))
#else
# define DEPRECATED__hammerhead_interfaces__msg__VectorNavData __declspec(deprecated)
#endif

namespace hammerhead_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VectorNavData_
{
  using Type = VectorNavData_<ContainerAllocator>;

  explicit VectorNavData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit VectorNavData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _orientation_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _orientation_type orientation;
  using _acceleration_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator> *;
  using ConstRawPtr =
    const hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hammerhead_interfaces__msg__VectorNavData
    std::shared_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hammerhead_interfaces__msg__VectorNavData
    std::shared_ptr<hammerhead_interfaces::msg::VectorNavData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VectorNavData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const VectorNavData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VectorNavData_

// alias to use template instance with default allocator
using VectorNavData =
  hammerhead_interfaces::msg::VectorNavData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__STRUCT_HPP_
