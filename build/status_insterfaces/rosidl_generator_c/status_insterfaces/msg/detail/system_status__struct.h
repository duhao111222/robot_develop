// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from status_insterfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "status_insterfaces/msg/system_status.h"


#ifndef STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'host_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemStatus in the package status_insterfaces.
typedef struct status_insterfaces__msg__SystemStatus
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String host_name;
  float cpu_percent;
  float memory_percent;
  float memory_total;
  float memory_available;
  double net_sent;
  double net_recv;
} status_insterfaces__msg__SystemStatus;

// Struct for a sequence of status_insterfaces__msg__SystemStatus.
typedef struct status_insterfaces__msg__SystemStatus__Sequence
{
  status_insterfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} status_insterfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
