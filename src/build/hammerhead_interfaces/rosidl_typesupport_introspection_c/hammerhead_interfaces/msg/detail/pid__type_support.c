// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hammerhead_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hammerhead_interfaces/msg/detail/pid__rosidl_typesupport_introspection_c.h"
#include "hammerhead_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hammerhead_interfaces/msg/detail/pid__functions.h"
#include "hammerhead_interfaces/msg/detail/pid__struct.h"


// Include directives for member types
// Member `kp`
// Member `ki`
// Member `kd`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hammerhead_interfaces__msg__PID__init(message_memory);
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_fini_function(void * message_memory)
{
  hammerhead_interfaces__msg__PID__fini(message_memory);
}

size_t hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__size_function__PID__kp(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__kp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__kp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__fetch_function__PID__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__kp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__assign_function__PID__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__kp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__resize_function__PID__kp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__size_function__PID__ki(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__ki(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__ki(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__fetch_function__PID__ki(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__ki(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__assign_function__PID__ki(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__ki(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__resize_function__PID__ki(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__size_function__PID__kd(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__kd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__kd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__fetch_function__PID__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__kd(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__assign_function__PID__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__kd(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__resize_function__PID__kd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_member_array[3] = {
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__PID, kp),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__size_function__PID__kp,  // size() function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__kp,  // get_const(index) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__kp,  // get(index) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__fetch_function__PID__kp,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__assign_function__PID__kp,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__resize_function__PID__kp  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__PID, ki),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__size_function__PID__ki,  // size() function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__ki,  // get_const(index) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__ki,  // get(index) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__fetch_function__PID__ki,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__assign_function__PID__ki,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__resize_function__PID__ki  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__PID, kd),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__size_function__PID__kd,  // size() function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_const_function__PID__kd,  // get_const(index) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__get_function__PID__kd,  // get(index) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__fetch_function__PID__kd,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__assign_function__PID__kd,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__resize_function__PID__kd  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_members = {
  "hammerhead_interfaces__msg",  // message namespace
  "PID",  // message name
  3,  // number of fields
  sizeof(hammerhead_interfaces__msg__PID),
  false,  // has_any_key_member_
  hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_member_array,  // message members
  hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_init_function,  // function to initialize message memory (memory has to be allocated)
  hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_type_support_handle = {
  0,
  &hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_members,
  get_message_typesupport_handle_function,
  &hammerhead_interfaces__msg__PID__get_type_hash,
  &hammerhead_interfaces__msg__PID__get_type_description,
  &hammerhead_interfaces__msg__PID__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hammerhead_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hammerhead_interfaces, msg, PID)() {
  if (!hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_type_support_handle.typesupport_identifier) {
    hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hammerhead_interfaces__msg__PID__rosidl_typesupport_introspection_c__PID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
