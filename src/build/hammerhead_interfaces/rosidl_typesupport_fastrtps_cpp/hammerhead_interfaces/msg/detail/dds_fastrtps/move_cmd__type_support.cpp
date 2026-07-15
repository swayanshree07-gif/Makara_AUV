// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hammerhead_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice
#include "hammerhead_interfaces/msg/detail/move_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hammerhead_interfaces/msg/detail/move_cmd__functions.h"
#include "hammerhead_interfaces/msg/detail/move_cmd__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hammerhead_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
cdr_serialize(
  const hammerhead_interfaces::msg::MoveCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: surge
  cdr << ros_message.surge;

  // Member: surge_speed
  cdr << ros_message.surge_speed;

  // Member: surge_time
  cdr << ros_message.surge_time;

  // Member: is_surge
  cdr << ros_message.is_surge;

  // Member: sway
  cdr << ros_message.sway;

  // Member: sway_speed
  cdr << ros_message.sway_speed;

  // Member: sway_time
  cdr << ros_message.sway_time;

  // Member: is_sway
  cdr << ros_message.is_sway;

  // Member: yaw
  cdr << ros_message.yaw;

  // Member: yaw_speed
  cdr << ros_message.yaw_speed;

  // Member: yaw_time
  cdr << ros_message.yaw_time;

  // Member: is_yaw
  cdr << ros_message.is_yaw;

  // Member: depth
  cdr << ros_message.depth;

  // Member: depth_speed
  cdr << ros_message.depth_speed;

  // Member: depth_time
  cdr << ros_message.depth_time;

  // Member: is_depth
  cdr << ros_message.is_depth;

  // Member: is_absolute
  cdr << ros_message.is_absolute;

  // Member: wait_for_max_timer_to_timeout
  cdr << ros_message.wait_for_max_timer_to_timeout;

  // Member: mode_after_last_cmd
  cdr << ros_message.mode_after_last_cmd;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hammerhead_interfaces::msg::MoveCmd & ros_message)
{
  // Member: surge
  cdr >> ros_message.surge;

  // Member: surge_speed
  cdr >> ros_message.surge_speed;

  // Member: surge_time
  cdr >> ros_message.surge_time;

  // Member: is_surge
  cdr >> ros_message.is_surge;

  // Member: sway
  cdr >> ros_message.sway;

  // Member: sway_speed
  cdr >> ros_message.sway_speed;

  // Member: sway_time
  cdr >> ros_message.sway_time;

  // Member: is_sway
  cdr >> ros_message.is_sway;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: yaw_speed
  cdr >> ros_message.yaw_speed;

  // Member: yaw_time
  cdr >> ros_message.yaw_time;

  // Member: is_yaw
  cdr >> ros_message.is_yaw;

  // Member: depth
  cdr >> ros_message.depth;

  // Member: depth_speed
  cdr >> ros_message.depth_speed;

  // Member: depth_time
  cdr >> ros_message.depth_time;

  // Member: is_depth
  cdr >> ros_message.is_depth;

  // Member: is_absolute
  cdr >> ros_message.is_absolute;

  // Member: wait_for_max_timer_to_timeout
  cdr >> ros_message.wait_for_max_timer_to_timeout;

  // Member: mode_after_last_cmd
  cdr >> ros_message.mode_after_last_cmd;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
get_serialized_size(
  const hammerhead_interfaces::msg::MoveCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: surge
  {
    size_t item_size = sizeof(ros_message.surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: surge_speed
  {
    size_t item_size = sizeof(ros_message.surge_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: surge_time
  {
    size_t item_size = sizeof(ros_message.surge_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_surge
  {
    size_t item_size = sizeof(ros_message.is_surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sway
  {
    size_t item_size = sizeof(ros_message.sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sway_speed
  {
    size_t item_size = sizeof(ros_message.sway_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sway_time
  {
    size_t item_size = sizeof(ros_message.sway_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_sway
  {
    size_t item_size = sizeof(ros_message.is_sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: yaw_speed
  {
    size_t item_size = sizeof(ros_message.yaw_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: yaw_time
  {
    size_t item_size = sizeof(ros_message.yaw_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_yaw
  {
    size_t item_size = sizeof(ros_message.is_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: depth
  {
    size_t item_size = sizeof(ros_message.depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: depth_speed
  {
    size_t item_size = sizeof(ros_message.depth_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: depth_time
  {
    size_t item_size = sizeof(ros_message.depth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_depth
  {
    size_t item_size = sizeof(ros_message.is_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_absolute
  {
    size_t item_size = sizeof(ros_message.is_absolute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wait_for_max_timer_to_timeout
  {
    size_t item_size = sizeof(ros_message.wait_for_max_timer_to_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mode_after_last_cmd
  {
    size_t item_size = sizeof(ros_message.mode_after_last_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
max_serialized_size_MoveCmd(
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

  // Member: surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: surge_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: surge_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sway_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: sway_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: yaw_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: yaw_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: depth_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: depth_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_absolute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: wait_for_max_timer_to_timeout
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: mode_after_last_cmd
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
    using DataType = hammerhead_interfaces::msg::MoveCmd;
    is_plain =
      (
      offsetof(DataType, mode_after_last_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
cdr_serialize_key(
  const hammerhead_interfaces::msg::MoveCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: surge
  cdr << ros_message.surge;

  // Member: surge_speed
  cdr << ros_message.surge_speed;

  // Member: surge_time
  cdr << ros_message.surge_time;

  // Member: is_surge
  cdr << ros_message.is_surge;

  // Member: sway
  cdr << ros_message.sway;

  // Member: sway_speed
  cdr << ros_message.sway_speed;

  // Member: sway_time
  cdr << ros_message.sway_time;

  // Member: is_sway
  cdr << ros_message.is_sway;

  // Member: yaw
  cdr << ros_message.yaw;

  // Member: yaw_speed
  cdr << ros_message.yaw_speed;

  // Member: yaw_time
  cdr << ros_message.yaw_time;

  // Member: is_yaw
  cdr << ros_message.is_yaw;

  // Member: depth
  cdr << ros_message.depth;

  // Member: depth_speed
  cdr << ros_message.depth_speed;

  // Member: depth_time
  cdr << ros_message.depth_time;

  // Member: is_depth
  cdr << ros_message.is_depth;

  // Member: is_absolute
  cdr << ros_message.is_absolute;

  // Member: wait_for_max_timer_to_timeout
  cdr << ros_message.wait_for_max_timer_to_timeout;

  // Member: mode_after_last_cmd
  cdr << ros_message.mode_after_last_cmd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
get_serialized_size_key(
  const hammerhead_interfaces::msg::MoveCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: surge
  {
    size_t item_size = sizeof(ros_message.surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: surge_speed
  {
    size_t item_size = sizeof(ros_message.surge_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: surge_time
  {
    size_t item_size = sizeof(ros_message.surge_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_surge
  {
    size_t item_size = sizeof(ros_message.is_surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sway
  {
    size_t item_size = sizeof(ros_message.sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sway_speed
  {
    size_t item_size = sizeof(ros_message.sway_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sway_time
  {
    size_t item_size = sizeof(ros_message.sway_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_sway
  {
    size_t item_size = sizeof(ros_message.is_sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: yaw_speed
  {
    size_t item_size = sizeof(ros_message.yaw_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: yaw_time
  {
    size_t item_size = sizeof(ros_message.yaw_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_yaw
  {
    size_t item_size = sizeof(ros_message.is_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: depth
  {
    size_t item_size = sizeof(ros_message.depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: depth_speed
  {
    size_t item_size = sizeof(ros_message.depth_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: depth_time
  {
    size_t item_size = sizeof(ros_message.depth_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_depth
  {
    size_t item_size = sizeof(ros_message.is_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_absolute
  {
    size_t item_size = sizeof(ros_message.is_absolute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: wait_for_max_timer_to_timeout
  {
    size_t item_size = sizeof(ros_message.wait_for_max_timer_to_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mode_after_last_cmd
  {
    size_t item_size = sizeof(ros_message.mode_after_last_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hammerhead_interfaces
max_serialized_size_key_MoveCmd(
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

  // Member: surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: surge_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: surge_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_surge
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sway_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sway_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_sway
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: depth_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: depth_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_depth
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_absolute
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wait_for_max_timer_to_timeout
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_after_last_cmd
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
    using DataType = hammerhead_interfaces::msg::MoveCmd;
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
  auto typed_message =
    static_cast<const hammerhead_interfaces::msg::MoveCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MoveCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hammerhead_interfaces::msg::MoveCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MoveCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hammerhead_interfaces::msg::MoveCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MoveCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MoveCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MoveCmd__callbacks = {
  "hammerhead_interfaces::msg",
  "MoveCmd",
  _MoveCmd__cdr_serialize,
  _MoveCmd__cdr_deserialize,
  _MoveCmd__get_serialized_size,
  _MoveCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MoveCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MoveCmd__callbacks,
  get_message_typesupport_handle_function,
  &hammerhead_interfaces__msg__MoveCmd__get_type_hash,
  &hammerhead_interfaces__msg__MoveCmd__get_type_description,
  &hammerhead_interfaces__msg__MoveCmd__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hammerhead_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hammerhead_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hammerhead_interfaces::msg::MoveCmd>()
{
  return &hammerhead_interfaces::msg::typesupport_fastrtps_cpp::_MoveCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hammerhead_interfaces, msg, MoveCmd)() {
  return &hammerhead_interfaces::msg::typesupport_fastrtps_cpp::_MoveCmd__handle;
}

#ifdef __cplusplus
}
#endif
