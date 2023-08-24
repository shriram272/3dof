// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduinobot_msgs:srv/QuarternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSGS__SRV__DETAIL__QUARTERNION_TO_EULER__STRUCT_H_
#define ARDUINOBOT_MSGS__SRV__DETAIL__QUARTERNION_TO_EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/QuarternionToEuler in the package arduinobot_msgs.
typedef struct arduinobot_msgs__srv__QuarternionToEuler_Request
{
  double x;
  double y;
  double z;
  double w;
} arduinobot_msgs__srv__QuarternionToEuler_Request;

// Struct for a sequence of arduinobot_msgs__srv__QuarternionToEuler_Request.
typedef struct arduinobot_msgs__srv__QuarternionToEuler_Request__Sequence
{
  arduinobot_msgs__srv__QuarternionToEuler_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__srv__QuarternionToEuler_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/QuarternionToEuler in the package arduinobot_msgs.
typedef struct arduinobot_msgs__srv__QuarternionToEuler_Response
{
  double roll;
  double pitch;
  double yaw;
} arduinobot_msgs__srv__QuarternionToEuler_Response;

// Struct for a sequence of arduinobot_msgs__srv__QuarternionToEuler_Response.
typedef struct arduinobot_msgs__srv__QuarternionToEuler_Response__Sequence
{
  arduinobot_msgs__srv__QuarternionToEuler_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msgs__srv__QuarternionToEuler_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINOBOT_MSGS__SRV__DETAIL__QUARTERNION_TO_EULER__STRUCT_H_
