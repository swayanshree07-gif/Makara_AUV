// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/thruster_speeds.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_H_

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

/// Struct defined in msg/ThrusterSpeeds in the package makara_interfaces.
typedef struct makara_interfaces__msg__ThrusterSpeeds
{
  rosidl_runtime_c__int16__Sequence data;
  rosidl_runtime_c__int16__Sequence reverse;
} makara_interfaces__msg__ThrusterSpeeds;

// Struct for a sequence of makara_interfaces__msg__ThrusterSpeeds.
typedef struct makara_interfaces__msg__ThrusterSpeeds__Sequence
{
  makara_interfaces__msg__ThrusterSpeeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__ThrusterSpeeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__STRUCT_H_
