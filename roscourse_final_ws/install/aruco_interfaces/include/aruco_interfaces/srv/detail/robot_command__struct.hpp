// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_interfaces:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__srv__RobotCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__srv__RobotCommand_Request __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Request_
{
  using Type = RobotCommand_Request_<ContainerAllocator>;

  explicit RobotCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    (void)_init;
  }

  explicit RobotCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__srv__RobotCommand_Request
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__srv__RobotCommand_Request
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Request_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Request_

// alias to use template instance with default allocator
using RobotCommand_Request =
  aruco_interfaces::srv::RobotCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_interfaces


#ifndef _WIN32
# define DEPRECATED__aruco_interfaces__srv__RobotCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__aruco_interfaces__srv__RobotCommand_Response __declspec(deprecated)
#endif

namespace aruco_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Response_
{
  using Type = RobotCommand_Response_<ContainerAllocator>;

  explicit RobotCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit RobotCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_interfaces__srv__RobotCommand_Response
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_interfaces__srv__RobotCommand_Response
    std::shared_ptr<aruco_interfaces::srv::RobotCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Response_

// alias to use template instance with default allocator
using RobotCommand_Response =
  aruco_interfaces::srv::RobotCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_interfaces

namespace aruco_interfaces
{

namespace srv
{

struct RobotCommand
{
  using Request = aruco_interfaces::srv::RobotCommand_Request;
  using Response = aruco_interfaces::srv::RobotCommand_Response;
};

}  // namespace srv

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
