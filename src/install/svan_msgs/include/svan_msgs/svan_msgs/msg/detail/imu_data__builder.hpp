// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svan_msgs:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
#define SVAN_MSGS__MSG__DETAIL__IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svan_msgs/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svan_msgs
{

namespace msg
{

namespace builder
{

class Init_ImuData_base_orientation_uncertainty
{
public:
  explicit Init_ImuData_base_orientation_uncertainty(::svan_msgs::msg::ImuData & msg)
  : msg_(msg)
  {}
  ::svan_msgs::msg::ImuData base_orientation_uncertainty(::svan_msgs::msg::ImuData::_base_orientation_uncertainty_type arg)
  {
    msg_.base_orientation_uncertainty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svan_msgs::msg::ImuData msg_;
};

class Init_ImuData_acceleration
{
public:
  explicit Init_ImuData_acceleration(::svan_msgs::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_base_orientation_uncertainty acceleration(::svan_msgs::msg::ImuData::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ImuData_base_orientation_uncertainty(msg_);
  }

private:
  ::svan_msgs::msg::ImuData msg_;
};

class Init_ImuData_angular_rate_bias_uncertainty
{
public:
  explicit Init_ImuData_angular_rate_bias_uncertainty(::svan_msgs::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_acceleration angular_rate_bias_uncertainty(::svan_msgs::msg::ImuData::_angular_rate_bias_uncertainty_type arg)
  {
    msg_.angular_rate_bias_uncertainty = std::move(arg);
    return Init_ImuData_acceleration(msg_);
  }

private:
  ::svan_msgs::msg::ImuData msg_;
};

class Init_ImuData_angular_rate_bias
{
public:
  explicit Init_ImuData_angular_rate_bias(::svan_msgs::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_angular_rate_bias_uncertainty angular_rate_bias(::svan_msgs::msg::ImuData::_angular_rate_bias_type arg)
  {
    msg_.angular_rate_bias = std::move(arg);
    return Init_ImuData_angular_rate_bias_uncertainty(msg_);
  }

private:
  ::svan_msgs::msg::ImuData msg_;
};

class Init_ImuData_angular_rate
{
public:
  explicit Init_ImuData_angular_rate(::svan_msgs::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_angular_rate_bias angular_rate(::svan_msgs::msg::ImuData::_angular_rate_type arg)
  {
    msg_.angular_rate = std::move(arg);
    return Init_ImuData_angular_rate_bias(msg_);
  }

private:
  ::svan_msgs::msg::ImuData msg_;
};

class Init_ImuData_base_orientation
{
public:
  Init_ImuData_base_orientation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuData_angular_rate base_orientation(::svan_msgs::msg::ImuData::_base_orientation_type arg)
  {
    msg_.base_orientation = std::move(arg);
    return Init_ImuData_angular_rate(msg_);
  }

private:
  ::svan_msgs::msg::ImuData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svan_msgs::msg::ImuData>()
{
  return svan_msgs::msg::builder::Init_ImuData_base_orientation();
}

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
