// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "makara_interfaces/msg/detail/thruster_speeds__rosidl_typesupport_introspection_c.h"
#include "makara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "makara_interfaces/msg/detail/thruster_speeds__functions.h"
#include "makara_interfaces/msg/detail/thruster_speeds__struct.h"


// Include directives for member types
// Member `data`
// Member `reverse`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  makara_interfaces__msg__ThrusterSpeeds__init(message_memory);
}

void makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_fini_function(void * message_memory)
{
  makara_interfaces__msg__ThrusterSpeeds__fini(message_memory);
}

size_t makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__size_function__ThrusterSpeeds__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_const_function__ThrusterSpeeds__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_function__ThrusterSpeeds__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__fetch_function__ThrusterSpeeds__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_const_function__ThrusterSpeeds__data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__assign_function__ThrusterSpeeds__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_function__ThrusterSpeeds__data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__resize_function__ThrusterSpeeds__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__size_function__ThrusterSpeeds__reverse(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_const_function__ThrusterSpeeds__reverse(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_function__ThrusterSpeeds__reverse(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__fetch_function__ThrusterSpeeds__reverse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_const_function__ThrusterSpeeds__reverse(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__assign_function__ThrusterSpeeds__reverse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_function__ThrusterSpeeds__reverse(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__resize_function__ThrusterSpeeds__reverse(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__ThrusterSpeeds, data),  // bytes offset in struct
    NULL,  // default value
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__size_function__ThrusterSpeeds__data,  // size() function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_const_function__ThrusterSpeeds__data,  // get_const(index) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_function__ThrusterSpeeds__data,  // get(index) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__fetch_function__ThrusterSpeeds__data,  // fetch(index, &value) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__assign_function__ThrusterSpeeds__data,  // assign(index, value) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__resize_function__ThrusterSpeeds__data  // resize(index) function pointer
  },
  {
    "reverse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__ThrusterSpeeds, reverse),  // bytes offset in struct
    NULL,  // default value
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__size_function__ThrusterSpeeds__reverse,  // size() function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_const_function__ThrusterSpeeds__reverse,  // get_const(index) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__get_function__ThrusterSpeeds__reverse,  // get(index) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__fetch_function__ThrusterSpeeds__reverse,  // fetch(index, &value) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__assign_function__ThrusterSpeeds__reverse,  // assign(index, value) function pointer
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__resize_function__ThrusterSpeeds__reverse  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_members = {
  "makara_interfaces__msg",  // message namespace
  "ThrusterSpeeds",  // message name
  2,  // number of fields
  sizeof(makara_interfaces__msg__ThrusterSpeeds),
  false,  // has_any_key_member_
  makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_member_array,  // message members
  makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_type_support_handle = {
  0,
  &makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_members,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__ThrusterSpeeds__get_type_hash,
  &makara_interfaces__msg__ThrusterSpeeds__get_type_description,
  &makara_interfaces__msg__ThrusterSpeeds__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_makara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, makara_interfaces, msg, ThrusterSpeeds)() {
  if (!makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_type_support_handle.typesupport_identifier) {
    makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &makara_interfaces__msg__ThrusterSpeeds__rosidl_typesupport_introspection_c__ThrusterSpeeds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
