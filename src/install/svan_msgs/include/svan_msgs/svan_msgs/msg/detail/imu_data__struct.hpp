// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from svan_msgs:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_HPP_
#define SVAN_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'base_orientation'
// Member 'base_orientation_uncertainty'
#include "svan_msgs/msg/detail/euler_xyz__struct.hpp"
// Member 'angular_rate'
// Member 'angular_rate_bias'
// Member 'angular_rate_bias_uncertainty'
// Member 'acceleration'
#include "svan_msgs/msg/detail/position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__svan_msgs__msg__ImuData __attribute__((deprecated))
#else
# define DEPRECATED__svan_msgs__msg__ImuData __declspec(deprecated)
#endif

namespace svan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuData_
{
  using Type = ImuData_<ContainerAllocator>;

  explicit ImuData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_orientation(_init),
    angular_rate(_init),
    angular_rate_bias(_init),
    angular_rate_bias_uncertainty(_init),
    acceleration(_init),
    base_orientation_uncertainty(_init)
  {
    (void)_init;
  }

  explicit ImuData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_orientation(_alloc, _init),
    angular_rate(_alloc, _init),
    angular_rate_bias(_alloc, _init),
    angular_rate_bias_uncertainty(_alloc, _init),
    acceleration(_alloc, _init),
    base_orientation_uncertainty(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _base_orientation_type =
    svan_msgs::msg::EulerXYZ_<ContainerAllocator>;
  _base_orientation_type base_orientation;
  using _angular_rate_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _angular_rate_type angular_rate;
  using _angular_rate_bias_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _angular_rate_bias_type angular_rate_bias;
  using _angular_rate_bias_uncertainty_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _angular_rate_bias_uncertainty_type angular_rate_bias_uncertainty;
  using _acceleration_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _base_orientation_uncertainty_type =
    svan_msgs::msg::EulerXYZ_<ContainerAllocator>;
  _base_orientation_uncertainty_type base_orientation_uncertainty;

  // setters for named parameter idiom
  Type & set__base_orientation(
    const svan_msgs::msg::EulerXYZ_<ContainerAllocator> & _arg)
  {
    this->base_orientation = _arg;
    return *this;
  }
  Type & set__angular_rate(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->angular_rate = _arg;
    return *this;
  }
  Type & set__angular_rate_bias(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->angular_rate_bias = _arg;
    return *this;
  }
  Type & set__angular_rate_bias_uncertainty(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->angular_rate_bias_uncertainty = _arg;
    return *this;
  }
  Type & set__acceleration(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__base_orientation_uncertainty(
    const svan_msgs::msg::EulerXYZ_<ContainerAllocator> & _arg)
  {
    this->base_orientation_uncertainty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    svan_msgs::msg::ImuData_<ContainerAllocator> *;
  using ConstRawPtr =
    const svan_msgs::msg::ImuData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<svan_msgs::msg::ImuData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<svan_msgs::msg::ImuData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::ImuData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::ImuData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::ImuData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::ImuData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<svan_msgs::msg::ImuData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<svan_msgs::msg::ImuData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__svan_msgs__msg__ImuData
    std::shared_ptr<svan_msgs::msg::ImuData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__svan_msgs__msg__ImuData
    std::shared_ptr<svan_msgs::msg::ImuData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuData_ & other) const
  {
    if (this->base_orientation != other.base_orientation) {
      return false;
    }
    if (this->angular_rate != other.angular_rate) {
      return false;
    }
    if (this->angular_rate_bias != other.angular_rate_bias) {
      return false;
    }
    if (this->angular_rate_bias_uncertainty != other.angular_rate_bias_uncertainty) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->base_orientation_uncertainty != other.base_orientation_uncertainty) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuData_

// alias to use template instance with default allocator
using ImuData =
  svan_msgs::msg::ImuData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_HPP_
