// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from status_insterfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#ifndef STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "status_insterfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "status_insterfaces/msg/detail/system_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
bool cdr_serialize_status_insterfaces__msg__SystemStatus(
  const status_insterfaces__msg__SystemStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
bool cdr_deserialize_status_insterfaces__msg__SystemStatus(
  eprosima::fastcdr::Cdr &,
  status_insterfaces__msg__SystemStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
size_t get_serialized_size_status_insterfaces__msg__SystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
size_t max_serialized_size_status_insterfaces__msg__SystemStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
bool cdr_serialize_key_status_insterfaces__msg__SystemStatus(
  const status_insterfaces__msg__SystemStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
size_t get_serialized_size_key_status_insterfaces__msg__SystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
size_t max_serialized_size_key_status_insterfaces__msg__SystemStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_insterfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, status_insterfaces, msg, SystemStatus)();

#ifdef __cplusplus
}
#endif

#endif  // STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
