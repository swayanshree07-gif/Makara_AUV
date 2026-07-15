// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/vector_nav_data.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/vector_nav_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_VectorNavData_acceleration
{
public:
  explicit Init_VectorNavData_acceleration(::makara_interfaces::msg::VectorNavData & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::VectorNavData acceleration(::makara_interfaces::msg::VectorNavData::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::VectorNavData msg_;
};

class Init_VectorNavData_orientation
{
public:
  explicit Init_VectorNavData_orientation(::makara_interfaces::msg::VectorNavData & msg)
  : msg_(msg)
  {}
  Init_VectorNavData_acceleration orientation(::makara_interfaces::msg::VectorNavData::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_VectorNavData_acceleration(msg_);
  }

private:
  ::makara_interfaces::msg::VectorNavData msg_;
};

class Init_VectorNavData_header
{
public:
  Init_VectorNavData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VectorNavData_orientation header(::makara_interfaces::msg::VectorNavData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VectorNavData_orientation(msg_);
  }

private:
  ::makara_interfaces::msg::VectorNavData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::VectorNavData>()
{
  return makara_interfaces::msg::builder::Init_VectorNavData_header();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__BUILDER_HPP_
