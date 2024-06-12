// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svan_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TWIST__BUILDER_HPP_
#define SVAN_MSGS__MSG__DETAIL__TWIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svan_msgs/msg/detail/twist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svan_msgs
{

namespace msg
{

namespace builder
{

class Init_Twist_angular
{
public:
  explicit Init_Twist_angular(::svan_msgs::msg::Twist & msg)
  : msg_(msg)
  {}
  ::svan_msgs::msg::Twist angular(::svan_msgs::msg::Twist::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svan_msgs::msg::Twist msg_;
};

class Init_Twist_linear
{
public:
  Init_Twist_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist_angular linear(::svan_msgs::msg::Twist::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Twist_angular(msg_);
  }

private:
  ::svan_msgs::msg::Twist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svan_msgs::msg::Twist>()
{
  return svan_msgs::msg::builder::Init_Twist_linear();
}

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__TWIST__BUILDER_HPP_
