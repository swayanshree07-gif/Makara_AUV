// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hammerhead_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/vector_nav_data.h"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__FUNCTIONS_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__FUNCTIONS_H_

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
#include "hammerhead_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "hammerhead_interfaces/msg/detail/vector_nav_data__struct.h"

/// Initialize msg/VectorNavData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hammerhead_interfaces__msg__VectorNavData
 * )) before or use
 * hammerhead_interfaces__msg__VectorNavData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
bool
hammerhead_interfaces__msg__VectorNavData__init(hammerhead_interfaces__msg__VectorNavData * msg);

/// Finalize msg/VectorNavData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
void
hammerhead_interfaces__msg__VectorNavData__fini(hammerhead_interfaces__msg__VectorNavData * msg);

/// Create msg/VectorNavData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hammerhead_interfaces__msg__VectorNavData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
hammerhead_interfaces__msg__VectorNavData *
hammerhead_interfaces__msg__VectorNavData__create(void);

/// Destroy msg/VectorNavData message.
/**
 * It calls
 * hammerhead_interfaces__msg__VectorNavData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
void
hammerhead_interfaces__msg__VectorNavData__destroy(hammerhead_interfaces__msg__VectorNavData * msg);

/// Check for msg/VectorNavData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
bool
hammerhead_interfaces__msg__VectorNavData__are_equal(const hammerhead_interfaces__msg__VectorNavData * lhs, const hammerhead_interfaces__msg__VectorNavData * rhs);

/// Copy a msg/VectorNavData message.
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
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
bool
hammerhead_interfaces__msg__VectorNavData__copy(
  const hammerhead_interfaces__msg__VectorNavData * input,
  hammerhead_interfaces__msg__VectorNavData * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__VectorNavData__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
hammerhead_interfaces__msg__VectorNavData__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_runtime_c__type_description__TypeSource *
hammerhead_interfaces__msg__VectorNavData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__VectorNavData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/VectorNavData messages.
/**
 * It allocates the memory for the number of elements and calls
 * hammerhead_interfaces__msg__VectorNavData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
bool
hammerhead_interfaces__msg__VectorNavData__Sequence__init(hammerhead_interfaces__msg__VectorNavData__Sequence * array, size_t size);

/// Finalize array of msg/VectorNavData messages.
/**
 * It calls
 * hammerhead_interfaces__msg__VectorNavData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
void
hammerhead_interfaces__msg__VectorNavData__Sequence__fini(hammerhead_interfaces__msg__VectorNavData__Sequence * array);

/// Create array of msg/VectorNavData messages.
/**
 * It allocates the memory for the array and calls
 * hammerhead_interfaces__msg__VectorNavData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
hammerhead_interfaces__msg__VectorNavData__Sequence *
hammerhead_interfaces__msg__VectorNavData__Sequence__create(size_t size);

/// Destroy array of msg/VectorNavData messages.
/**
 * It calls
 * hammerhead_interfaces__msg__VectorNavData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
void
hammerhead_interfaces__msg__VectorNavData__Sequence__destroy(hammerhead_interfaces__msg__VectorNavData__Sequence * array);

/// Check for msg/VectorNavData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
bool
hammerhead_interfaces__msg__VectorNavData__Sequence__are_equal(const hammerhead_interfaces__msg__VectorNavData__Sequence * lhs, const hammerhead_interfaces__msg__VectorNavData__Sequence * rhs);

/// Copy an array of msg/VectorNavData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
bool
hammerhead_interfaces__msg__VectorNavData__Sequence__copy(
  const hammerhead_interfaces__msg__VectorNavData__Sequence * input,
  hammerhead_interfaces__msg__VectorNavData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__VECTOR_NAV_DATA__FUNCTIONS_H_
