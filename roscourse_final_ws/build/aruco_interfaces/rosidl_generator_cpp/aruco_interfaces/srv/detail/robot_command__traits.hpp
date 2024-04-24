// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
#define ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_

#include "aruco_interfaces/srv/detail/robot_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_interfaces::srv::RobotCommand_Request>()
{
  return "aruco_interfaces::srv::RobotCommand_Request";
}

template<>
inline const char * name<aruco_interfaces::srv::RobotCommand_Request>()
{
  return "aruco_interfaces/srv/RobotCommand_Request";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::RobotCommand_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<aruco_interfaces::srv::RobotCommand_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<aruco_interfaces::srv::RobotCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_interfaces::srv::RobotCommand_Response>()
{
  return "aruco_interfaces::srv::RobotCommand_Response";
}

template<>
inline const char * name<aruco_interfaces::srv::RobotCommand_Response>()
{
  return "aruco_interfaces/srv/RobotCommand_Response";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::RobotCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aruco_interfaces::srv::RobotCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aruco_interfaces::srv::RobotCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_interfaces::srv::RobotCommand>()
{
  return "aruco_interfaces::srv::RobotCommand";
}

template<>
inline const char * name<aruco_interfaces::srv::RobotCommand>()
{
  return "aruco_interfaces/srv/RobotCommand";
}

template<>
struct has_fixed_size<aruco_interfaces::srv::RobotCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<aruco_interfaces::srv::RobotCommand_Request>::value &&
    has_fixed_size<aruco_interfaces::srv::RobotCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<aruco_interfaces::srv::RobotCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<aruco_interfaces::srv::RobotCommand_Request>::value &&
    has_bounded_size<aruco_interfaces::srv::RobotCommand_Response>::value
  >
{
};

template<>
struct is_service<aruco_interfaces::srv::RobotCommand>
  : std::true_type
{
};

template<>
struct is_service_request<aruco_interfaces::srv::RobotCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aruco_interfaces::srv::RobotCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
