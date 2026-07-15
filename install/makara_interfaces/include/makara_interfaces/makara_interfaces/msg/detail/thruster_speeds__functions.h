// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/thruster_speeds.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__FUNCTIONS_H_
#define MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "makara_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "makara_interfaces/msg/detail/thruster_speeds__struct.h"

/// Initialize msg/ThrusterSpeeds message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * makara_interfaces__msg__ThrusterSpeeds
 * )) before or use
 * makara_interfaces__msg__ThrusterSpeeds__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
bool
makara_interfaces__msg__ThrusterSpeeds__init(makara_interfaces__msg__ThrusterSpeeds * msg);

/// Finalize msg/ThrusterSpeeds message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
void
makara_interfaces__msg__ThrusterSpeeds__fini(makara_interfaces__msg__ThrusterSpeeds * msg);

/// Create msg/ThrusterSpeeds message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * makara_interfaces__msg__ThrusterSpeeds__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
makara_interfaces__msg__ThrusterSpeeds *
makara_interfaces__msg__ThrusterSpeeds__create(void);

/// Destroy msg/ThrusterSpeeds message.
/**
 * It calls
 * makara_interfaces__msg__ThrusterSpeeds__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
void
makara_interfaces__msg__ThrusterSpeeds__destroy(makara_interfaces__msg__ThrusterSpeeds * msg);

/// Check for msg/ThrusterSpeeds message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
bool
makara_interfaces__msg__ThrusterSpeeds__are_equal(const makara_interfaces__msg__ThrusterSpeeds * lhs, const makara_interfaces__msg__ThrusterSpeeds * rhs);

/// Copy a msg/ThrusterSpeeds message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
bool
makara_interfaces__msg__ThrusterSpeeds__copy(
  const makara_interfaces__msg__ThrusterSpeeds * input,
  makara_interfaces__msg__ThrusterSpeeds * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__ThrusterSpeeds__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
makara_interfaces__msg__ThrusterSpeeds__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__ThrusterSpeeds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__ThrusterSpeeds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ThrusterSpeeds messages.
/**
 * It allocates the memory for the number of elements and calls
 * makara_interfaces__msg__ThrusterSpeeds__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
bool
makara_interfaces__msg__ThrusterSpeeds__Sequence__init(makara_interfaces__msg__ThrusterSpeeds__Sequence * array, size_t size);

/// Finalize array of msg/ThrusterSpeeds messages.
/**
 * It calls
 * makara_interfaces__msg__ThrusterSpeeds__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
void
makara_interfaces__msg__ThrusterSpeeds__Sequence__fini(makara_interfaces__msg__ThrusterSpeeds__Sequence * array);

/// Create array of msg/ThrusterSpeeds messages.
/**
 * It allocates the memory for the array and calls
 * makara_interfaces__msg__ThrusterSpeeds__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
makara_interfaces__msg__ThrusterSpeeds__Sequence *
makara_interfaces__msg__ThrusterSpeeds__Sequence__create(size_t size);

/// Destroy array of msg/ThrusterSpeeds messages.
/**
 * It calls
 * makara_interfaces__msg__ThrusterSpeeds__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
void
makara_interfaces__msg__ThrusterSpeeds__Sequence__destroy(makara_interfaces__msg__ThrusterSpeeds__Sequence * array);

/// Check for msg/ThrusterSpeeds message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
bool
makara_interfaces__msg__ThrusterSpeeds__Sequence__are_equal(const makara_interfaces__msg__ThrusterSpeeds__Sequence * lhs, const makara_interfaces__msg__ThrusterSpeeds__Sequence * rhs);

/// Copy an array of msg/ThrusterSpeeds messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
bool
makara_interfaces__msg__ThrusterSpeeds__Sequence__copy(
  const makara_interfaces__msg__ThrusterSpeeds__Sequence * input,
  makara_interfaces__msg__ThrusterSpeeds__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__THRUSTER_SPEEDS__FUNCTIONS_H_
