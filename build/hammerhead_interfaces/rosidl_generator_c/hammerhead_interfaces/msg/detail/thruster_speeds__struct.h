// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hammerhead_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/thruster_speeds.h"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
// Member 'reverse'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ThrusterSpeeds in the package hammerhead_interfaces.
typedef struct hammerhead_interfaces__msg__ThrusterSpeeds
{
  rosidl_runtime_c__int16__Sequence data;
  rosidl_runtime_c__int16__Sequence reverse;
} hammerhead_interfaces__msg__ThrusterSpeeds;

// Struct for a sequence of hammerhead_interfaces__msg__ThrusterSpeeds.
typedef struct hammerhead_interfaces__msg__ThrusterSpeeds__Sequence
{
  hammerhead_interfaces__msg__ThrusterSpeeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hammerhead_interfaces__msg__ThrusterSpeeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_H_
