// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from makara_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice
#include "makara_interfaces/msg/detail/move_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "makara_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "makara_interfaces/msg/detail/move_cmd__struct.h"
#include "makara_interfaces/msg/detail/move_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MoveCmd__ros_msg_type = makara_interfaces__msg__MoveCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
bool cdr_serialize_makara_interfaces__msg__MoveCmd(
  const makara_interfaces__msg__MoveCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: surge
  {
    cdr << ros_message->surge;
  }

  // Field name: surge_speed
  {
    cdr << ros_message->surge_speed;
  }

  // Field name: surge_time
  {
    cdr << ros_message->surge_time;
  }

  // Field name: is_surge
  {
    cdr << ros_message->is_surge;
  }

  // Field name: sway
  {
    cdr << ros_message->sway;
  }

  // Field name: sway_speed
  {
    cdr << ros_message->sway_speed;
  }

  // Field name: sway_time
  {
    cdr << ros_message->sway_time;
  }

  // Field name: is_sway
  {
    cdr << ros_message->is_sway;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: yaw_speed
  {
    cdr << ros_message->yaw_speed;
  }

  // Field name: yaw_time
  {
    cdr << ros_message->yaw_time;
  }

  // Field name: is_yaw
  {
    cdr << ros_message->is_yaw;
  }

  // Field name: depth
  {
    cdr << ros_message->depth;
  }

  // Field name: depth_speed
  {
    cdr << ros_message->depth_speed;
  }

  // Field name: depth_time
  {
    cdr << ros_message->depth_time;
  }

  // Field name: is_depth
  {
    cdr << ros_message->is_depth;
  }

  // Field name: is_absolute
  {
    cdr << ros_message->is_absolute;
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    cdr << ros_message->wait_for_max_timer_to_timeout;
  }

  // Field name: mode_after_last_cmd
  {
    cdr << ros_message->mode_after_last_cmd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
bool cdr_deserialize_makara_interfaces__msg__MoveCmd(
  eprosima::fastcdr::Cdr & cdr,
  makara_interfaces__msg__MoveCmd * ros_message)
{
  // Field name: surge
  {
    cdr >> ros_message->surge;
  }

  // Field name: surge_speed
  {
    cdr >> ros_message->surge_speed;
  }

  // Field name: surge_time
  {
    cdr >> ros_message->surge_time;
  }

  // Field name: is_surge
  {
    cdr >> ros_message->is_surge;
  }

  // Field name: sway
  {
    cdr >> ros_message->sway;
  }

  // Field name: sway_speed
  {
    cdr >> ros_message->sway_speed;
  }

  // Field name: sway_time
  {
    cdr >> ros_message->sway_time;
  }

  // Field name: is_sway
  {
    cdr >> ros_message->is_sway;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: yaw_speed
  {
    cdr >> ros_message->yaw_speed;
  }

  // Field name: yaw_time
  {
    cdr >> ros_message->yaw_time;
  }

  // Field name: is_yaw
  {
    cdr >> ros_message->is_yaw;
  }

  // Field name: depth
  {
    cdr >> ros_message->depth;
  }

  // Field name: depth_speed
  {
    cdr >> ros_message->depth_speed;
  }

  // Field name: depth_time
  {
    cdr >> ros_message->depth_time;
  }

  // Field name: is_depth
  {
    cdr >> ros_message->is_depth;
  }

  // Field name: is_absolute
  {
    cdr >> ros_message->is_absolute;
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    cdr >> ros_message->wait_for_max_timer_to_timeout;
  }

  // Field name: mode_after_last_cmd
  {
    cdr >> ros_message->mode_after_last_cmd;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t get_serialized_size_makara_interfaces__msg__MoveCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveCmd__ros_msg_type * ros_message = static_cast<const _MoveCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: surge
  {
    size_t item_size = sizeof(ros_message->surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: surge_speed
  {
    size_t item_size = sizeof(ros_message->surge_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: surge_time
  {
    size_t item_size = sizeof(ros_message->surge_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_surge
  {
    size_t item_size = sizeof(ros_message->is_surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sway
  {
    size_t item_size = sizeof(ros_message->sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sway_speed
  {
    size_t item_size = sizeof(ros_message->sway_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sway_time
  {
    size_t item_size = sizeof(ros_message->sway_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_sway
  {
    size_t item_size = sizeof(ros_message->is_sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_speed
  {
    size_t item_size = sizeof(ros_message->yaw_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_time
  {
    size_t item_size = sizeof(ros_message->yaw_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_yaw
  {
    size_t item_size = sizeof(ros_message->is_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: depth
  {
    size_t item_size = sizeof(ros_message->depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: depth_speed
  {
    size_t item_size = sizeof(ros_message->depth_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: depth_time
  {
    size_t item_size = sizeof(ros_message->depth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_depth
  {
    size_t item_size = sizeof(ros_message->is_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_absolute
  {
    size_t item_size = sizeof(ros_message->is_absolute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    size_t item_size = sizeof(ros_message->wait_for_max_timer_to_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_after_last_cmd
  {
    size_t item_size = sizeof(ros_message->mode_after_last_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t max_serialized_size_makara_interfaces__msg__MoveCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: surge_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: surge_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sway_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sway_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: depth_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: depth_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_absolute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_after_last_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = makara_interfaces__msg__MoveCmd;
    is_plain =
      (
      offsetof(DataType, mode_after_last_cmd) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
bool cdr_serialize_key_makara_interfaces__msg__MoveCmd(
  const makara_interfaces__msg__MoveCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: surge
  {
    cdr << ros_message->surge;
  }

  // Field name: surge_speed
  {
    cdr << ros_message->surge_speed;
  }

  // Field name: surge_time
  {
    cdr << ros_message->surge_time;
  }

  // Field name: is_surge
  {
    cdr << ros_message->is_surge;
  }

  // Field name: sway
  {
    cdr << ros_message->sway;
  }

  // Field name: sway_speed
  {
    cdr << ros_message->sway_speed;
  }

  // Field name: sway_time
  {
    cdr << ros_message->sway_time;
  }

  // Field name: is_sway
  {
    cdr << ros_message->is_sway;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: yaw_speed
  {
    cdr << ros_message->yaw_speed;
  }

  // Field name: yaw_time
  {
    cdr << ros_message->yaw_time;
  }

  // Field name: is_yaw
  {
    cdr << ros_message->is_yaw;
  }

  // Field name: depth
  {
    cdr << ros_message->depth;
  }

  // Field name: depth_speed
  {
    cdr << ros_message->depth_speed;
  }

  // Field name: depth_time
  {
    cdr << ros_message->depth_time;
  }

  // Field name: is_depth
  {
    cdr << ros_message->is_depth;
  }

  // Field name: is_absolute
  {
    cdr << ros_message->is_absolute;
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    cdr << ros_message->wait_for_max_timer_to_timeout;
  }

  // Field name: mode_after_last_cmd
  {
    cdr << ros_message->mode_after_last_cmd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t get_serialized_size_key_makara_interfaces__msg__MoveCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveCmd__ros_msg_type * ros_message = static_cast<const _MoveCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: surge
  {
    size_t item_size = sizeof(ros_message->surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: surge_speed
  {
    size_t item_size = sizeof(ros_message->surge_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: surge_time
  {
    size_t item_size = sizeof(ros_message->surge_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_surge
  {
    size_t item_size = sizeof(ros_message->is_surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sway
  {
    size_t item_size = sizeof(ros_message->sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sway_speed
  {
    size_t item_size = sizeof(ros_message->sway_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sway_time
  {
    size_t item_size = sizeof(ros_message->sway_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_sway
  {
    size_t item_size = sizeof(ros_message->is_sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_speed
  {
    size_t item_size = sizeof(ros_message->yaw_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_time
  {
    size_t item_size = sizeof(ros_message->yaw_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_yaw
  {
    size_t item_size = sizeof(ros_message->is_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: depth
  {
    size_t item_size = sizeof(ros_message->depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: depth_speed
  {
    size_t item_size = sizeof(ros_message->depth_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: depth_time
  {
    size_t item_size = sizeof(ros_message->depth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_depth
  {
    size_t item_size = sizeof(ros_message->is_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_absolute
  {
    size_t item_size = sizeof(ros_message->is_absolute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    size_t item_size = sizeof(ros_message->wait_for_max_timer_to_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode_after_last_cmd
  {
    size_t item_size = sizeof(ros_message->mode_after_last_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_makara_interfaces
size_t max_serialized_size_key_makara_interfaces__msg__MoveCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: surge_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: surge_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sway_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sway_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: yaw_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: depth_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: depth_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_absolute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wait_for_max_timer_to_timeout
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode_after_last_cmd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = makara_interfaces__msg__MoveCmd;
    is_plain =
      (
      offsetof(DataType, mode_after_last_cmd) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MoveCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const makara_interfaces__msg__MoveCmd * ros_message = static_cast<const makara_interfaces__msg__MoveCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_makara_interfaces__msg__MoveCmd(ros_message, cdr);
}

static bool _MoveCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  makara_interfaces__msg__MoveCmd * ros_message = static_cast<makara_interfaces__msg__MoveCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_makara_interfaces__msg__MoveCmd(cdr, ros_message);
}

static uint32_t _MoveCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_makara_interfaces__msg__MoveCmd(
      untyped_ros_message, 0));
}

static size_t _MoveCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_makara_interfaces__msg__MoveCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveCmd = {
  "makara_interfaces::msg",
  "MoveCmd",
  _MoveCmd__cdr_serialize,
  _MoveCmd__cdr_deserialize,
  _MoveCmd__get_serialized_size,
  _MoveCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MoveCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveCmd,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__MoveCmd__get_type_hash,
  &makara_interfaces__msg__MoveCmd__get_type_description,
  &makara_interfaces__msg__MoveCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, makara_interfaces, msg, MoveCmd)() {
  return &_MoveCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
