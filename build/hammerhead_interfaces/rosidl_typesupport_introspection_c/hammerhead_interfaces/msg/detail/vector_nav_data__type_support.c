// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hammerhead_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hammerhead_interfaces/msg/detail/vector_nav_data__rosidl_typesupport_introspection_c.h"
#include "hammerhead_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hammerhead_interfaces/msg/detail/vector_nav_data__functions.h"
#include "hammerhead_interfaces/msg/detail/vector_nav_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hammerhead_interfaces__msg__VectorNavData__init(message_memory);
}

void hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_fini_function(void * message_memory)
{
  hammerhead_interfaces__msg__VectorNavData__fini(message_memory);
}

size_t hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__orientation(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__orientation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__orientation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__orientation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__orientation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__orientation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__acceleration(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__acceleration(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__VectorNavData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__VectorNavData, orientation),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__orientation,  // size() function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__orientation,  // get_const(index) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__orientation,  // get(index) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__orientation,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__orientation,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__orientation  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__VectorNavData, acceleration),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__acceleration,  // size() function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__acceleration,  // get_const(index) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__acceleration,  // get(index) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__acceleration,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__acceleration,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__acceleration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_members = {
  "hammerhead_interfaces__msg",  // message namespace
  "VectorNavData",  // message name
  3,  // number of fields
  sizeof(hammerhead_interfaces__msg__VectorNavData),
  false,  // has_any_key_member_
  hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_member_array,  // message members
  hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_init_function,  // function to initialize message memory (memory has to be allocated)
  hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle = {
  0,
  &hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_members,
  get_message_typesupport_handle_function,
  &hammerhead_interfaces__msg__VectorNavData__get_type_hash,
  &hammerhead_interfaces__msg__VectorNavData__get_type_description,
  &hammerhead_interfaces__msg__VectorNavData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hammerhead_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hammerhead_interfaces, msg, VectorNavData)() {
  hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle.typesupport_identifier) {
    hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hammerhead_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
