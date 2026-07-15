// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/vector_nav_data.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/vector_nav_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_VectorNavData_acceleration
{
public:
  explicit Init_VectorNavData_acceleration(::hammerhead_interfaces::msg::VectorNavData & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::VectorNavData acceleration(::hammerhead_interfaces::msg::VectorNavData::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::VectorNavData msg_;
};

class Init_VectorNavData_orientation
{
public:
  explicit Init_VectorNavData_orientation(::hammerhead_interfaces::msg::VectorNavData & msg)
  : msg_(msg)
  {}
  Init_VectorNavData_acceleration orientation(::hammerhead_interfaces::msg::VectorNavData::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_VectorNavData_acceleration(msg_);
  }

private:
  ::hammerhead_interfaces::msg::VectorNavData msg_;
};

class Init_VectorNavData_header
{
public:
  Init_VectorNavData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VectorNavData_orientation header(::hammerhead_interfaces::msg::VectorNavData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VectorNavData_orientation(msg_);
  }

private:
  ::hammerhead_interfaces::msg::VectorNavData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::VectorNavData>()
{
  return hammerhead_interfaces::msg::builder::Init_VectorNavData_header();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__BUILDER_HPP_
