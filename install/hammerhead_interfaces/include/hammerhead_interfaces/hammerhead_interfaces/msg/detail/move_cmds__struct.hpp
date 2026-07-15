// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/move_cmds.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'list'
#include "hammerhead_interfaces/msg/detail/move_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hammerhead_interfaces__msg__MoveCmds __attribute__((deprecated))
#else
# define DEPRECATED__hammerhead_interfaces__msg__MoveCmds __declspec(deprecated)
#endif

namespace hammerhead_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveCmds_
{
  using Type = MoveCmds_<ContainerAllocator>;

  explicit MoveCmds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->len = 0l;
    }
  }

  explicit MoveCmds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->len = 0l;
    }
  }

  // field types and members
  using _len_type =
    int32_t;
  _len_type len;
  using _list_type =
    std::vector<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>>;
  _list_type list;

  // setters for named parameter idiom
  Type & set__len(
    const int32_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__list(
    const std::vector<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hammerhead_interfaces::msg::MoveCmd_<ContainerAllocator>>> & _arg)
  {
    this->list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator> *;
  using ConstRawPtr =
    const hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hammerhead_interfaces__msg__MoveCmds
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hammerhead_interfaces__msg__MoveCmds
    std::shared_ptr<hammerhead_interfaces::msg::MoveCmds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCmds_ & other) const
  {
    if (this->len != other.len) {
      return false;
    }
    if (this->list != other.list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCmds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCmds_

// alias to use template instance with default allocator
using MoveCmds =
  hammerhead_interfaces::msg::MoveCmds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_HPP_
