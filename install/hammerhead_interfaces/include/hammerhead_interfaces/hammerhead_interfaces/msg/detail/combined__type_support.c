// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hammerhead_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hammerhead_interfaces/msg/detail/combined__rosidl_typesupport_introspection_c.h"
#include "hammerhead_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hammerhead_interfaces/msg/detail/combined__functions.h"
#include "hammerhead_interfaces/msg/detail/combined__struct.h"


// Include directives for member types
// Member `angular`
// Member `linear`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hammerhead_interfaces__msg__Combined__init(message_memory);
}

void hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_fini_function(void * message_memory)
{
  hammerhead_interfaces__msg__Combined__fini(message_memory);
}

size_t hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__size_function__Combined__angular(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_const_function__Combined__angular(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_function__Combined__angular(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__fetch_function__Combined__angular(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_const_function__Combined__angular(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__assign_function__Combined__angular(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_function__Combined__angular(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__resize_function__Combined__angular(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__size_function__Combined__linear(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_const_function__Combined__linear(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_function__Combined__linear(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__fetch_function__Combined__linear(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_const_function__Combined__linear(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__assign_function__Combined__linear(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_function__Combined__linear(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__resize_function__Combined__linear(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_member_array[3] = {
  {
    "angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__Combined, angular),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__size_function__Combined__angular,  // size() function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_const_function__Combined__angular,  // get_const(index) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_function__Combined__angular,  // get(index) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__fetch_function__Combined__angular,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__assign_function__Combined__angular,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__resize_function__Combined__angular  // resize(index) function pointer
  },
  {
    "linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__Combined, linear),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__size_function__Combined__linear,  // size() function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_const_function__Combined__linear,  // get_const(index) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__get_function__Combined__linear,  // get(index) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__fetch_function__Combined__linear,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__assign_function__Combined__linear,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__resize_function__Combined__linear  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__Combined, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_members = {
  "hammerhead_interfaces__msg",  // message namespace
  "Combined",  // message name
  3,  // number of fields
  sizeof(hammerhead_interfaces__msg__Combined),
  false,  // has_any_key_member_
  hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_member_array,  // message members
  hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_init_function,  // function to initialize message memory (memory has to be allocated)
  hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_type_support_handle = {
  0,
  &hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_members,
  get_message_typesupport_handle_function,
  &hammerhead_interfaces__msg__Combined__get_type_hash,
  &hammerhead_interfaces__msg__Combined__get_type_description,
  &hammerhead_interfaces__msg__Combined__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hammerhead_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hammerhead_interfaces, msg, Combined)() {
  if (!hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_type_support_handle.typesupport_identifier) {
    hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hammerhead_interfaces__msg__Combined__rosidl_typesupport_introspection_c__Combined_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
