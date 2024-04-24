// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include "aruco_interfaces/srv/detail/robot_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Request_target_pose
{
public:
  Init_RobotCommand_Request_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::srv::RobotCommand_Request target_pose(::aruco_interfaces::srv::RobotCommand_Request::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::RobotCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::RobotCommand_Request>()
{
  return aruco_interfaces::srv::builder::Init_RobotCommand_Request_target_pose();
}

}  // namespace aruco_interfaces


namespace aruco_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Response_success
{
public:
  Init_RobotCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_interfaces::srv::RobotCommand_Response success(::aruco_interfaces::srv::RobotCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::srv::RobotCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::srv::RobotCommand_Response>()
{
  return aruco_interfaces::srv::builder::Init_RobotCommand_Response_success();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
