// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/depth.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/depth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_Depth_depth
{
public:
  explicit Init_Depth_depth(::hammerhead_interfaces::msg::Depth & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::Depth depth(::hammerhead_interfaces::msg::Depth::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Depth msg_;
};

class Init_Depth_header
{
public:
  Init_Depth_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Depth_depth header(::hammerhead_interfaces::msg::Depth::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Depth_depth(msg_);
  }

private:
  ::hammerhead_interfaces::msg::Depth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::Depth>()
{
  return hammerhead_interfaces::msg::builder::Init_Depth_header();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__BUILDER_HPP_
