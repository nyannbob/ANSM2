// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from svan_msgs:msg/ImuData.idl
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
#include "svan_msgs/msg/detail/imu_data__struct.h"
#include "svan_msgs/msg/detail/imu_data__functions.h"

bool svan_msgs__msg__euler_xyz__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * svan_msgs__msg__euler_xyz__convert_to_py(void * raw_ros_message);
bool svan_msgs__msg__position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * svan_msgs__msg__position__convert_to_py(void * raw_ros_message);
bool svan_msgs__msg__position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * svan_msgs__msg__position__convert_to_py(void * raw_ros_message);
bool svan_msgs__msg__position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * svan_msgs__msg__position__convert_to_py(void * raw_ros_message);
bool svan_msgs__msg__position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * svan_msgs__msg__position__convert_to_py(void * raw_ros_message);
bool svan_msgs__msg__euler_xyz__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * svan_msgs__msg__euler_xyz__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool svan_msgs__msg__imu_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("svan_msgs.msg._imu_data.ImuData", full_classname_dest, 31) == 0);
  }
  svan_msgs__msg__ImuData * ros_message = _ros_message;
  {  // base_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_orientation");
    if (!field) {
      return false;
    }
    if (!svan_msgs__msg__euler_xyz__convert_from_py(field, &ros_message->base_orientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_rate");
    if (!field) {
      return false;
    }
    if (!svan_msgs__msg__position__convert_from_py(field, &ros_message->angular_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_rate_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_rate_bias");
    if (!field) {
      return false;
    }
    if (!svan_msgs__msg__position__convert_from_py(field, &ros_message->angular_rate_bias)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_rate_bias_uncertainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_rate_bias_uncertainty");
    if (!field) {
      return false;
    }
    if (!svan_msgs__msg__position__convert_from_py(field, &ros_message->angular_rate_bias_uncertainty)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    if (!svan_msgs__msg__position__convert_from_py(field, &ros_message->acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // base_orientation_uncertainty
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_orientation_uncertainty");
    if (!field) {
      return false;
    }
    if (!svan_msgs__msg__euler_xyz__convert_from_py(field, &ros_message->base_orientation_uncertainty)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * svan_msgs__msg__imu_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImuData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("svan_msgs.msg._imu_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImuData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  svan_msgs__msg__ImuData * ros_message = (svan_msgs__msg__ImuData *)raw_ros_message;
  {  // base_orientation
    PyObject * field = NULL;
    field = svan_msgs__msg__euler_xyz__convert_to_py(&ros_message->base_orientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_rate
    PyObject * field = NULL;
    field = svan_msgs__msg__position__convert_to_py(&ros_message->angular_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_rate_bias
    PyObject * field = NULL;
    field = svan_msgs__msg__position__convert_to_py(&ros_message->angular_rate_bias);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_rate_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_rate_bias_uncertainty
    PyObject * field = NULL;
    field = svan_msgs__msg__position__convert_to_py(&ros_message->angular_rate_bias_uncertainty);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_rate_bias_uncertainty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = svan_msgs__msg__position__convert_to_py(&ros_message->acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_orientation_uncertainty
    PyObject * field = NULL;
    field = svan_msgs__msg__euler_xyz__convert_to_py(&ros_message->base_orientation_uncertainty);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_orientation_uncertainty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
