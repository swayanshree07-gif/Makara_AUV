// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hammerhead_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice
#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hammerhead_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hammerhead_interfaces/msg/detail/depth__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
bool cdr_serialize_hammerhead_interfaces__msg__Depth(
  const hammerhead_interfaces__msg__Depth * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
bool cdr_deserialize_hammerhead_interfaces__msg__Depth(
  eprosima::fastcdr::Cdr &,
  hammerhead_interfaces__msg__Depth * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t get_serialized_size_hammerhead_interfaces__msg__Depth(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t max_serialized_size_hammerhead_interfaces__msg__Depth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
bool cdr_serialize_key_hammerhead_interfaces__msg__Depth(
  const hammerhead_interfaces__msg__Depth * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t get_serialized_size_key_hammerhead_interfaces__msg__Depth(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t max_serialized_size_key_hammerhead_interfaces__msg__Depth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hammerhead_interfaces, msg, Depth)();

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__DEPTH__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
