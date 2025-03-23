// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from status_insterfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "status_insterfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "status_insterfaces/msg/detail/system_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace status_insterfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
cdr_serialize(
  const status_insterfaces::msg::SystemStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  status_insterfaces::msg::SystemStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
get_serialized_size(
  const status_insterfaces::msg::SystemStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
max_serialized_size_SystemStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
cdr_serialize_key(
  const status_insterfaces::msg::SystemStatus & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
get_serialized_size_key(
  const status_insterfaces::msg::SystemStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
max_serialized_size_key_SystemStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace status_insterfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_insterfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, status_insterfaces, msg, SystemStatus)();

#ifdef __cplusplus
}
#endif

#endif  // STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
