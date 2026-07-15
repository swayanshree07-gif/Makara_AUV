// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hammerhead_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/pid.h"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__STRUCT_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'kp'
// Member 'ki'
// Member 'kd'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PID in the package hammerhead_interfaces.
typedef struct hammerhead_interfaces__msg__PID
{
  rosidl_runtime_c__float__Sequence kp;
  rosidl_runtime_c__float__Sequence ki;
  rosidl_runtime_c__float__Sequence kd;
} hammerhead_interfaces__msg__PID;

// Struct for a sequence of hammerhead_interfaces__msg__PID.
typedef struct hammerhead_interfaces__msg__PID__Sequence
{
  hammerhead_interfaces__msg__PID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hammerhead_interfaces__msg__PID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__PID__STRUCT_H_
