// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__BUILDER_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__BUILDER_HPP_

#include "aruco_interfaces/msg/detail/aruco_location__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aruco_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArucoLocation_aruco_found
{
public:
  explicit Init_ArucoLocation_aruco_found(::aruco_interfaces::msg::ArucoLocation & msg)
  : msg_(msg)
  {}
  ::aruco_interfaces::msg::ArucoLocation aruco_found(::aruco_interfaces::msg::ArucoLocation::_aruco_found_type arg)
  {
    msg_.aruco_found = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_interfaces::msg::ArucoLocation msg_;
};

class Init_ArucoLocation_aruco_id
{
public:
  explicit Init_ArucoLocation_aruco_id(::aruco_interfaces::msg::ArucoLocation & msg)
  : msg_(msg)
  {}
  Init_ArucoLocation_aruco_found aruco_id(::aruco_interfaces::msg::ArucoLocation::_aruco_id_type arg)
  {
    msg_.aruco_id = std::move(arg);
    return Init_ArucoLocation_aruco_found(msg_);
  }

private:
  ::aruco_interfaces::msg::ArucoLocation msg_;
};

class Init_ArucoLocation_aruco_pose
{
public:
  Init_ArucoLocation_aruco_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoLocation_aruco_id aruco_pose(::aruco_interfaces::msg::ArucoLocation::_aruco_pose_type arg)
  {
    msg_.aruco_pose = std::move(arg);
    return Init_ArucoLocation_aruco_id(msg_);
  }

private:
  ::aruco_interfaces::msg::ArucoLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_interfaces::msg::ArucoLocation>()
{
  return aruco_interfaces::msg::builder::Init_ArucoLocation_aruco_pose();
}

}  // namespace aruco_interfaces

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__BUILDER_HPP_
