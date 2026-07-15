// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/move_cmds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__MoveCmds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x3a, 0x97, 0xdb, 0x83, 0x7e, 0x90, 0xd0,
      0xb2, 0xc6, 0x08, 0xbc, 0x69, 0x92, 0xda, 0x88,
      0x2a, 0x98, 0x3c, 0x12, 0xfe, 0x0e, 0x17, 0x5d,
      0x30, 0x6a, 0x52, 0x65, 0x02, 0x81, 0xf0, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "hammerhead_interfaces/msg/detail/move_cmd__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t hammerhead_interfaces__msg__MoveCmd__EXPECTED_HASH = {1, {
    0xc3, 0xdf, 0xa2, 0x7e, 0x15, 0x71, 0xd8, 0xd7,
    0x04, 0x24, 0xcd, 0xde, 0x84, 0x34, 0x0a, 0xda,
    0x28, 0x82, 0xfe, 0x37, 0x23, 0x38, 0x17, 0x60,
    0xbc, 0xbf, 0xdf, 0xd5, 0xce, 0x54, 0x81, 0xe5,
  }};
#endif

static char hammerhead_interfaces__msg__MoveCmds__TYPE_NAME[] = "hammerhead_interfaces/msg/MoveCmds";
static char hammerhead_interfaces__msg__MoveCmd__TYPE_NAME[] = "hammerhead_interfaces/msg/MoveCmd";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__MoveCmds__FIELD_NAME__len[] = "len";
static char hammerhead_interfaces__msg__MoveCmds__FIELD_NAME__list[] = "list";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__MoveCmds__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__MoveCmds__FIELD_NAME__len, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__MoveCmds__FIELD_NAME__list, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {hammerhead_interfaces__msg__MoveCmd__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hammerhead_interfaces__msg__MoveCmds__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {hammerhead_interfaces__msg__MoveCmd__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hammerhead_interfaces__msg__MoveCmds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__MoveCmds__TYPE_NAME, 34, 34},
      {hammerhead_interfaces__msg__MoveCmds__FIELDS, 2, 2},
    },
    {hammerhead_interfaces__msg__MoveCmds__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&hammerhead_interfaces__msg__MoveCmd__EXPECTED_HASH, hammerhead_interfaces__msg__MoveCmd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = hammerhead_interfaces__msg__MoveCmd__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 len\n"
  "MoveCmd[] list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hammerhead_interfaces__msg__MoveCmds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__MoveCmds__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__MoveCmds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__MoveCmds__get_individual_type_description_source(NULL),
    sources[1] = *hammerhead_interfaces__msg__MoveCmd__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
