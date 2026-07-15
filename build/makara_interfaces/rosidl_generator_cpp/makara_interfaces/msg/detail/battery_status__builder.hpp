// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from makara_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/battery_status.hpp"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "makara_interfaces/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace makara_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_battery2
{
public:
  explicit Init_BatteryStatus_battery2(::makara_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::makara_interfaces::msg::BatteryStatus battery2(::makara_interfaces::msg::BatteryStatus::_battery2_type arg)
  {
    msg_.battery2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::makara_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_battery1
{
public:
  explicit Init_BatteryStatus_battery1(::makara_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_battery2 battery1(::makara_interfaces::msg::BatteryStatus::_battery1_type arg)
  {
    msg_.battery1 = std::move(arg);
    return Init_BatteryStatus_battery2(msg_);
  }

private:
  ::makara_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_header
{
public:
  Init_BatteryStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_battery1 header(::makara_interfaces::msg::BatteryStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BatteryStatus_battery1(msg_);
  }

private:
  ::makara_interfaces::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::makara_interfaces::msg::BatteryStatus>()
{
  return makara_interfaces::msg::builder::Init_BatteryStatus_header();
}

}  // namespace makara_interfaces

#endif  // MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
