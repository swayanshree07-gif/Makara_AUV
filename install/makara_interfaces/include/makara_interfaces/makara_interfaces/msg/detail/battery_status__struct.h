// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/battery_status.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'battery1'
// Member 'battery2'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BatteryStatus in the package makara_interfaces.
typedef struct makara_interfaces__msg__BatteryStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence battery1;
  rosidl_runtime_c__float__Sequence battery2;
} makara_interfaces__msg__BatteryStatus;

// Struct for a sequence of makara_interfaces__msg__BatteryStatus.
typedef struct makara_interfaces__msg__BatteryStatus__Sequence
{
  makara_interfaces__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
