// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__STRUCT_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'aruco_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__msg__ArucoLocation __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__msg__ArucoLocation __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArucoLocation_
{
  using Type = ArucoLocation_<ContainerAllocator>;

  explicit ArucoLocation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : aruco_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aruco_id = 0;
      this->aruco_found = false;
    }
  }

  explicit ArucoLocation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : aruco_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aruco_id = 0;
      this->aruco_found = false;
    }
  }

  // field types and members
  using _aruco_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _aruco_pose_type aruco_pose;
  using _aruco_id_type =
    uint16_t;
  _aruco_id_type aruco_id;
  using _aruco_found_type =
    bool;
  _aruco_found_type aruco_found;

  // setters for named parameter idiom
  Type & set__aruco_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->aruco_pose = _arg;
    return *this;
  }
  Type & set__aruco_id(
    const uint16_t & _arg)
  {
    this->aruco_id = _arg;
    return *this;
  }
  Type & set__aruco_found(
    const bool & _arg)
  {
    this->aruco_found = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::msg::ArucoLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::msg::ArucoLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::msg::ArucoLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::msg::ArucoLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__msg__ArucoLocation
    std::shared_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__msg__ArucoLocation
    std::shared_ptr<aruco_interfaces::msg::ArucoLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoLocation_ & other) const
  {
    if (this->aruco_pose != other.aruco_pose) {
      return false;
    }
    if (this->aruco_id != other.aruco_id) {
      return false;
    }
    if (this->aruco_found != other.aruco_found) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoLocation_

// alias to use template instance with default allocator
using ArucoLocation =
  aruco_interfaces::msg::ArucoLocation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__STRUCT_HPP_
