// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from makara_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "makara_interfaces/msg/detail/move_cmd__struct.h"
#include "makara_interfaces/msg/detail/move_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool makara_interfaces__msg__move_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("makara_interfaces.msg._move_cmd.MoveCmd", full_classname_dest, 39) == 0);
  }
  makara_interfaces__msg__MoveCmd * ros_message = _ros_message;
  {  // surge
    PyObject * field = PyObject_GetAttrString(_pymsg, "surge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->surge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // surge_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "surge_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->surge_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // surge_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "surge_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->surge_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_surge
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_surge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_surge = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sway
    PyObject * field = PyObject_GetAttrString(_pymsg, "sway");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sway = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sway_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sway_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sway_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sway_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "sway_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sway_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_sway
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_sway");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_sway = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_yaw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_yaw = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // depth_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // depth_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_depth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_depth = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_absolute
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_absolute");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_absolute = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wait_for_max_timer_to_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "wait_for_max_timer_to_timeout");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wait_for_max_timer_to_timeout = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mode_after_last_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_after_last_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_after_last_cmd = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * makara_interfaces__msg__move_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("makara_interfaces.msg._move_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  makara_interfaces__msg__MoveCmd * ros_message = (makara_interfaces__msg__MoveCmd *)raw_ros_message;
  {  // surge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->surge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "surge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // surge_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->surge_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "surge_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // surge_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->surge_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "surge_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_surge
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_surge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_surge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sway
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sway);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sway", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sway_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sway_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sway_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sway_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sway_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sway_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_sway
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_sway);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_sway", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_yaw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_depth
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_absolute
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_absolute);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_absolute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wait_for_max_timer_to_timeout
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wait_for_max_timer_to_timeout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wait_for_max_timer_to_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_after_last_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_after_last_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_after_last_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
