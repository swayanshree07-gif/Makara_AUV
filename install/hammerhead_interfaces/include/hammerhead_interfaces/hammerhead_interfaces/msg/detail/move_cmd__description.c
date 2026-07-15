// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/move_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__MoveCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xdf, 0xa2, 0x7e, 0x15, 0x71, 0xd8, 0xd7,
      0x04, 0x24, 0xcd, 0xde, 0x84, 0x34, 0x0a, 0xda,
      0x28, 0x82, 0xfe, 0x37, 0x23, 0x38, 0x17, 0x60,
      0xbc, 0xbf, 0xdf, 0xd5, 0xce, 0x54, 0x81, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hammerhead_interfaces__msg__MoveCmd__TYPE_NAME[] = "hammerhead_interfaces/msg/MoveCmd";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__surge[] = "surge";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__surge_speed[] = "surge_speed";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__surge_time[] = "surge_time";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_surge[] = "is_surge";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__sway[] = "sway";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__sway_speed[] = "sway_speed";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__sway_time[] = "sway_time";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_sway[] = "is_sway";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__yaw[] = "yaw";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__yaw_speed[] = "yaw_speed";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__yaw_time[] = "yaw_time";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_yaw[] = "is_yaw";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__depth[] = "depth";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__depth_speed[] = "depth_speed";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__depth_time[] = "depth_time";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_depth[] = "is_depth";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_absolute[] = "is_absolute";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__wait_for_max_timer_to_timeout[] = "wait_for_max_timer_to_timeout";
static char hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__mode_after_last_cmd[] = "mode_after_last_cmd";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__MoveCmd__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__surge, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__surge_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__surge_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_surge, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__sway, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__sway_speed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__sway_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_sway, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__yaw_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__yaw_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_yaw, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__depth, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__depth_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__depth_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_depth, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__is_absolute, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__wait_for_max_timer_to_timeout, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmd__FIELD_NAME__mode_after_last_cmd, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hammerhead_interfaces__msg__MoveCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__MoveCmd__TYPE_NAME, 33, 33},
      {hammerhead_interfaces__msg__MoveCmd__FIELDS, 19, 19},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 surge\n"
  "float32 surge_speed\n"
  "float32 surge_time\n"
  "int8 is_surge\n"
  "\n"
  "float32 sway\n"
  "float32 sway_speed\n"
  "float32 sway_time\n"
  "int8 is_sway\n"
  "\n"
  "float32 yaw\n"
  "float32 yaw_speed\n"
  "float32 yaw_time\n"
  "int8 is_yaw\n"
  "\n"
  "float32 depth\n"
  "float32 depth_speed\n"
  "float32 depth_time\n"
  "int8 is_depth\n"
  "\n"
  "int8 is_absolute\n"
  "int8 wait_for_max_timer_to_timeout\n"
  "int8 mode_after_last_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hammerhead_interfaces__msg__MoveCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__MoveCmd__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 337, 337},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__MoveCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__MoveCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
