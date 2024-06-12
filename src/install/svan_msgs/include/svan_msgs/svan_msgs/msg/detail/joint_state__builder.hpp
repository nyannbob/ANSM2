// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svan_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define SVAN_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svan_msgs/msg/detail/joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svan_msgs
{

namespace msg
{

namespace builder
{

class Init_JointState_effort
{
public:
  explicit Init_JointState_effort(::svan_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  ::svan_msgs::msg::JointState effort(::svan_msgs::msg::JointState::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svan_msgs::msg::JointState msg_;
};

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::svan_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_effort velocity(::svan_msgs::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointState_effort(msg_);
  }

private:
  ::svan_msgs::msg::JointState msg_;
};

class Init_JointState_position
{
public:
  explicit Init_JointState_position(::svan_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity position(::svan_msgs::msg::JointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::svan_msgs::msg::JointState msg_;
};

class Init_JointState_gait_id
{
public:
  Init_JointState_gait_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_position gait_id(::svan_msgs::msg::JointState::_gait_id_type arg)
  {
    msg_.gait_id = std::move(arg);
    return Init_JointState_position(msg_);
  }

private:
  ::svan_msgs::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svan_msgs::msg::JointState>()
{
  return svan_msgs::msg::builder::Init_JointState_gait_id();
}

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
