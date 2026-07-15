// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/combined__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__Combined__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xfa, 0x38, 0x87, 0x30, 0xe6, 0xe4, 0xcb,
      0xd6, 0x61, 0x3d, 0x02, 0x67, 0x1a, 0xd8, 0xf0,
      0x38, 0xd6, 0x22, 0xc4, 0x82, 0xdf, 0xdc, 0xb6,
      0x7f, 0x52, 0x68, 0x64, 0xd6, 0xa5, 0xea, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hammerhead_interfaces__msg__Combined__TYPE_NAME[] = "hammerhead_interfaces/msg/Combined";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__Combined__FIELD_NAME__angular[] = "angular";
static char hammerhead_interfaces__msg__Combined__FIELD_NAME__linear[] = "linear";
static char hammerhead_interfaces__msg__Combined__FIELD_NAME__depth[] = "depth";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__Combined__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__Combined__FIELD_NAME__angular, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Combined__FIELD_NAME__linear, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Combined__FIELD_NAME__depth, 5, 5},
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
hammerhead_interfaces__msg__Combined__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__Combined__TYPE_NAME, 34, 34},
      {hammerhead_interfaces__msg__Combined__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Roll, Pitch, Yaw\n"
  "float32[] angular\n"
  "\n"
  "# X, Y, Z\n"
  "float32[] linear\n"
  "\n"
  "float32 depth";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hammerhead_interfaces__msg__Combined__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__Combined__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__Combined__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__Combined__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
