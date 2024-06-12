// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from svan_msgs:msg/EulerXYZ.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__EULER_XYZ__STRUCT_HPP_
#define SVAN_MSGS__MSG__DETAIL__EULER_XYZ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__svan_msgs__msg__EulerXYZ __attribute__((deprecated))
#else
# define DEPRECATED__svan_msgs__msg__EulerXYZ __declspec(deprecated)
#endif

namespace svan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EulerXYZ_
{
  using Type = EulerXYZ_<ContainerAllocator>;

  explicit EulerXYZ_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit EulerXYZ_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    svan_msgs::msg::EulerXYZ_<ContainerAllocator> *;
  using ConstRawPtr =
    const svan_msgs::msg::EulerXYZ_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::EulerXYZ_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::EulerXYZ_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__svan_msgs__msg__EulerXYZ
    std::shared_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__svan_msgs__msg__EulerXYZ
    std::shared_ptr<svan_msgs::msg::EulerXYZ_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EulerXYZ_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const EulerXYZ_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EulerXYZ_

// alias to use template instance with default allocator
using EulerXYZ =
  svan_msgs::msg::EulerXYZ_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__EULER_XYZ__STRUCT_HPP_
