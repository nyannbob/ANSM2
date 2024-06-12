// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__POSE_EULER__STRUCT_HPP_
#define SVAN_MSGS__MSG__DETAIL__POSE_EULER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "svan_msgs/msg/detail/position__struct.hpp"
// Member 'orientation'
#include "svan_msgs/msg/detail/euler_xyz__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__svan_msgs__msg__PoseEuler __attribute__((deprecated))
#else
# define DEPRECATED__svan_msgs__msg__PoseEuler __declspec(deprecated)
#endif

namespace svan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseEuler_
{
  using Type = PoseEuler_<ContainerAllocator>;

  explicit PoseEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit PoseEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    svan_msgs::msg::EulerXYZ_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__position(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const svan_msgs::msg::EulerXYZ_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    svan_msgs::msg::PoseEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const svan_msgs::msg::PoseEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::PoseEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::PoseEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__svan_msgs__msg__PoseEuler
    std::shared_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__svan_msgs__msg__PoseEuler
    std::shared_ptr<svan_msgs::msg::PoseEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseEuler_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseEuler_

// alias to use template instance with default allocator
using PoseEuler =
  svan_msgs::msg::PoseEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__POSE_EULER__STRUCT_HPP_
