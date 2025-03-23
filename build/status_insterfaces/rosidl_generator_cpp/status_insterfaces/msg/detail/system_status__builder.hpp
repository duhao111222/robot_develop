// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from status_insterfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "status_insterfaces/msg/system_status.hpp"


#ifndef STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "status_insterfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace status_insterfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_net_recv
{
public:
  explicit Init_SystemStatus_net_recv(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::status_insterfaces::msg::SystemStatus net_recv(::status_insterfaces::msg::SystemStatus::_net_recv_type arg)
  {
    msg_.net_recv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_net_sent
{
public:
  explicit Init_SystemStatus_net_sent(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_net_recv net_sent(::status_insterfaces::msg::SystemStatus::_net_sent_type arg)
  {
    msg_.net_sent = std::move(arg);
    return Init_SystemStatus_net_recv(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_available
{
public:
  explicit Init_SystemStatus_memory_available(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_net_sent memory_available(::status_insterfaces::msg::SystemStatus::_memory_available_type arg)
  {
    msg_.memory_available = std::move(arg);
    return Init_SystemStatus_net_sent(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_total
{
public:
  explicit Init_SystemStatus_memory_total(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_available memory_total(::status_insterfaces::msg::SystemStatus::_memory_total_type arg)
  {
    msg_.memory_total = std::move(arg);
    return Init_SystemStatus_memory_available(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_percent
{
public:
  explicit Init_SystemStatus_memory_percent(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_total memory_percent(::status_insterfaces::msg::SystemStatus::_memory_percent_type arg)
  {
    msg_.memory_percent = std::move(arg);
    return Init_SystemStatus_memory_total(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_cpu_percent
{
public:
  explicit Init_SystemStatus_cpu_percent(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_percent cpu_percent(::status_insterfaces::msg::SystemStatus::_cpu_percent_type arg)
  {
    msg_.cpu_percent = std::move(arg);
    return Init_SystemStatus_memory_percent(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_host_name
{
public:
  explicit Init_SystemStatus_host_name(::status_insterfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_cpu_percent host_name(::status_insterfaces::msg::SystemStatus::_host_name_type arg)
  {
    msg_.host_name = std::move(arg);
    return Init_SystemStatus_cpu_percent(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_stamp
{
public:
  Init_SystemStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_host_name stamp(::status_insterfaces::msg::SystemStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SystemStatus_host_name(msg_);
  }

private:
  ::status_insterfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::status_insterfaces::msg::SystemStatus>()
{
  return status_insterfaces::msg::builder::Init_SystemStatus_stamp();
}

}  // namespace status_insterfaces

#endif  // STATUS_INSTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
