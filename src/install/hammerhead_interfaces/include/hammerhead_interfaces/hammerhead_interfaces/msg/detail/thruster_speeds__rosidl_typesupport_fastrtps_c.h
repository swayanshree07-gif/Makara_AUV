// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hammerhead_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice
#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hammerhead_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hammerhead_interfaces/msg/detail/thruster_speeds__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
bool cdr_serialize_hammerhead_interfaces__msg__ThrusterSpeeds(
  const hammerhead_interfaces__msg__ThrusterSpeeds * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
bool cdr_deserialize_hammerhead_interfaces__msg__ThrusterSpeeds(
  eprosima::fastcdr::Cdr &,
  hammerhead_interfaces__msg__ThrusterSpeeds * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t get_serialized_size_hammerhead_interfaces__msg__ThrusterSpeeds(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t max_serialized_size_hammerhead_interfaces__msg__ThrusterSpeeds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
bool cdr_serialize_key_hammerhead_interfaces__msg__ThrusterSpeeds(
  const hammerhead_interfaces__msg__ThrusterSpeeds * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t get_serialized_size_key_hammerhead_interfaces__msg__ThrusterSpeeds(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
size_t max_serialized_size_key_hammerhead_interfaces__msg__ThrusterSpeeds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hammerhead_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hammerhead_interfaces, msg, ThrusterSpeeds)();

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
