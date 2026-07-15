// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hammerhead_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hammerhead_interfaces/msg/detail/setpoint__functions.h"
#include "hammerhead_interfaces/msg/detail/setpoint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hammerhead_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Setpoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hammerhead_interfaces::msg::Setpoint(_init);
}

void Setpoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hammerhead_interfaces::msg::Setpoint *>(message_memory);
  typed_message->~Setpoint();
}

size_t size_function__Setpoint__setpoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Setpoint__setpoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Setpoint__setpoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Setpoint__setpoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Setpoint__setpoints(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Setpoint__setpoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Setpoint__setpoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Setpoint__setpoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Setpoint__joy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Setpoint__joy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Setpoint__joy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Setpoint__joy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Setpoint__joy(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Setpoint__joy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Setpoint__joy(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__Setpoint__joy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Setpoint_message_member_array[2] = {
  {
    "setpoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces::msg::Setpoint, setpoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Setpoint__setpoints,  // size() function pointer
    get_const_function__Setpoint__setpoints,  // get_const(index) function pointer
    get_function__Setpoint__setpoints,  // get(index) function pointer
    fetch_function__Setpoint__setpoints,  // fetch(index, &value) function pointer
    assign_function__Setpoint__setpoints,  // assign(index, value) function pointer
    resize_function__Setpoint__setpoints  // resize(index) function pointer
  },
  {
    "joy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces::msg::Setpoint, joy),  // bytes offset in struct
    nullptr,  // default value
    size_function__Setpoint__joy,  // size() function pointer
    get_const_function__Setpoint__joy,  // get_const(index) function pointer
    get_function__Setpoint__joy,  // get(index) function pointer
    fetch_function__Setpoint__joy,  // fetch(index, &value) function pointer
    assign_function__Setpoint__joy,  // assign(index, value) function pointer
    resize_function__Setpoint__joy  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Setpoint_message_members = {
  "hammerhead_interfaces::msg",  // message namespace
  "Setpoint",  // message name
  2,  // number of fields
  sizeof(hammerhead_interfaces::msg::Setpoint),
  false,  // has_any_key_member_
  Setpoint_message_member_array,  // message members
  Setpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  Setpoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Setpoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Setpoint_message_members,
  get_message_typesupport_handle_function,
  &hammerhead_interfaces__msg__Setpoint__get_type_hash,
  &hammerhead_interfaces__msg__Setpoint__get_type_description,
  &hammerhead_interfaces__msg__Setpoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hammerhead_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hammerhead_interfaces::msg::Setpoint>()
{
  return &::hammerhead_interfaces::msg::rosidl_typesupport_introspection_cpp::Setpoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hammerhead_interfaces, msg, Setpoint)() {
  return &::hammerhead_interfaces::msg::rosidl_typesupport_introspection_cpp::Setpoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
