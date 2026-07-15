// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/depth.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__DEPTH__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__DEPTH__STRUCT_H_

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

/// Struct defined in msg/Depth in the package makara_interfaces.
typedef struct makara_interfaces__msg__Depth
{
  std_msgs__msg__Header header;
  float depth;
} makara_interfaces__msg__Depth;

// Struct for a sequence of makara_interfaces__msg__Depth.
typedef struct makara_interfaces__msg__Depth__Sequence
{
  makara_interfaces__msg__Depth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__Depth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__DEPTH__STRUCT_H_
