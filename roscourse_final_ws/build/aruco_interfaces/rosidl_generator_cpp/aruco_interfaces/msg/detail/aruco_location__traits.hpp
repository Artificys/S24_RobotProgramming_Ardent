// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__TRAITS_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__TRAITS_HPP_

#include "aruco_interfaces/msg/detail/aruco_location__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'aruco_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_interfaces::msg::ArucoLocation>()
{
  return "aruco_interfaces::msg::ArucoLocation";
}

template<>
inline const char * name<aruco_interfaces::msg::ArucoLocation>()
{
  return "aruco_interfaces/msg/ArucoLocation";
}

template<>
struct has_fixed_size<aruco_interfaces::msg::ArucoLocation>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<aruco_interfaces::msg::ArucoLocation>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<aruco_interfaces::msg::ArucoLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__TRAITS_HPP_
