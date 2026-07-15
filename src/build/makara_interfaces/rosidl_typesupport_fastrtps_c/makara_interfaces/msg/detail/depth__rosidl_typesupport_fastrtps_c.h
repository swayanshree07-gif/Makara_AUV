// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from makara_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice
#ifndef MAKARA_INTERFACES__MSG__DETAIL__DEPTH__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MAKARA_INTERFACES__MSG__DETAIL__DEPTH__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "makara_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "makara_interfaces/msg/detail/depth__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
bool cdr_serialize_makara_interfaces__msg__Depth(
  const makara_interfaces__msg__Depth * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
bool cdr_deserialize_makara_interfaces__msg__Depth(
  eprosima::fastcdr::Cdr &,
  makara_interfaces__msg__Depth * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t get_serialized_size_makara_interfaces__msg__Depth(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t max_serialized_size_makara_interfaces__msg__Depth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
bool cdr_serialize_key_makara_interfaces__msg__Depth(
  const makara_interfaces__msg__Depth * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t get_serialized_size_key_makara_interfaces__msg__Depth(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t max_serialized_size_key_makara_interfaces__msg__Depth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, makara_interfaces, msg, Depth)();

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__DEPTH__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
