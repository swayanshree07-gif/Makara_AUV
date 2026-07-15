// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/vector_nav_data.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__STRUCT_H_

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
// Member 'orientation'
// Member 'acceleration'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VectorNavData in the package makara_interfaces.
typedef struct makara_interfaces__msg__VectorNavData
{
  std_msgs__msg__Header header;
  /// Roll, Pitch, Yaw
  rosidl_runtime_c__float__Sequence orientation;
  /// X, Y, Z
  rosidl_runtime_c__float__Sequence acceleration;
} makara_interfaces__msg__VectorNavData;

// Struct for a sequence of makara_interfaces__msg__VectorNavData.
typedef struct makara_interfaces__msg__VectorNavData__Sequence
{
  makara_interfaces__msg__VectorNavData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__VectorNavData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__STRUCT_H_
