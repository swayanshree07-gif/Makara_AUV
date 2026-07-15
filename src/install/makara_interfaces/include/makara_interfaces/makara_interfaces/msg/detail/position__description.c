// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__Position__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xf1, 0x62, 0xc2, 0x89, 0xf2, 0x96, 0xa5,
      0x9d, 0x9d, 0xcd, 0x5b, 0xc1, 0xa1, 0x4c, 0x20,
      0x9d, 0xd5, 0x69, 0xe3, 0xb1, 0x17, 0x2e, 0x0e,
      0x03, 0x72, 0x85, 0x69, 0x55, 0x11, 0xf7, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__Position__TYPE_NAME[] = "makara_interfaces/msg/Position";

// Define type names, field names, and default values
static char makara_interfaces__msg__Position__FIELD_NAME__x[] = "x";
static char makara_interfaces__msg__Position__FIELD_NAME__y[] = "y";
static char makara_interfaces__msg__Position__FIELD_NAME__z[] = "z";
static char makara_interfaces__msg__Position__FIELD_NAME__roll[] = "roll";
static char makara_interfaces__msg__Position__FIELD_NAME__pitch[] = "pitch";
static char makara_interfaces__msg__Position__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__Position__FIELDS[] = {
  {
    {makara_interfaces__msg__Position__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Position__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Position__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Position__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Position__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Position__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
makara_interfaces__msg__Position__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__Position__TYPE_NAME, 30, 30},
      {makara_interfaces__msg__Position__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "float32 roll\n"
  "float32 pitch\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__Position__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__Position__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__Position__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__Position__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
