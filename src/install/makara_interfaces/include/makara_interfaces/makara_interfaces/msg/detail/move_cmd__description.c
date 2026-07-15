// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/move_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__MoveCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x33, 0xc9, 0x37, 0xe9, 0x3e, 0x6a, 0x60,
      0x85, 0x25, 0xce, 0x1a, 0x33, 0x6f, 0x07, 0xf7,
      0xcb, 0xbf, 0xb6, 0xdf, 0x13, 0x06, 0x75, 0xdc,
      0x62, 0x4c, 0x8b, 0xfa, 0x19, 0x8d, 0x79, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__MoveCmd__TYPE_NAME[] = "makara_interfaces/msg/MoveCmd";

// Define type names, field names, and default values
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__surge[] = "surge";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__surge_speed[] = "surge_speed";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__surge_time[] = "surge_time";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__is_surge[] = "is_surge";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__sway[] = "sway";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__sway_speed[] = "sway_speed";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__sway_time[] = "sway_time";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__is_sway[] = "is_sway";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__yaw[] = "yaw";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__yaw_speed[] = "yaw_speed";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__yaw_time[] = "yaw_time";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__is_yaw[] = "is_yaw";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__depth[] = "depth";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__depth_speed[] = "depth_speed";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__depth_time[] = "depth_time";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__is_depth[] = "is_depth";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__is_absolute[] = "is_absolute";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__wait_for_max_timer_to_timeout[] = "wait_for_max_timer_to_timeout";
static char makara_interfaces__msg__MoveCmd__FIELD_NAME__mode_after_last_cmd[] = "mode_after_last_cmd";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__MoveCmd__FIELDS[] = {
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__surge, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__surge_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__surge_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__is_surge, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__sway, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__sway_speed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__sway_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__is_sway, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__yaw_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__yaw_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__is_yaw, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__depth, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__depth_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__depth_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__is_depth, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__is_absolute, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__wait_for_max_timer_to_timeout, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmd__FIELD_NAME__mode_after_last_cmd, 19, 19},
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
makara_interfaces__msg__MoveCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__MoveCmd__TYPE_NAME, 29, 29},
      {makara_interfaces__msg__MoveCmd__FIELDS, 19, 19},
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
makara_interfaces__msg__MoveCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__MoveCmd__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 337, 337},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__MoveCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__MoveCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
