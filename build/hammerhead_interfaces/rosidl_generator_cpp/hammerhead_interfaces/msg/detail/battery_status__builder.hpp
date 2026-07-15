// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hammerhead_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/battery_status.hpp"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hammerhead_interfaces/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hammerhead_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_battery2
{
public:
  explicit Init_BatteryStatus_battery2(::hammerhead_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::hammerhead_interfaces::msg::BatteryStatus battery2(::hammerhead_interfaces::msg::BatteryStatus::_battery2_type arg)
  {
    msg_.battery2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hammerhead_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_battery1
{
public:
  explicit Init_BatteryStatus_battery1(::hammerhead_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_battery2 battery1(::hammerhead_interfaces::msg::BatteryStatus::_battery1_type arg)
  {
    msg_.battery1 = std::move(arg);
    return Init_BatteryStatus_battery2(msg_);
  }

private:
  ::hammerhead_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_header
{
public:
  Init_BatteryStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_battery1 header(::hammerhead_interfaces::msg::BatteryStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BatteryStatus_battery1(msg_);
  }

private:
  ::hammerhead_interfaces::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hammerhead_interfaces::msg::BatteryStatus>()
{
  return hammerhead_interfaces::msg::builder::Init_BatteryStatus_header();
}

}  // namespace hammerhead_interfaces

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
