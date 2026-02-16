// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ros2_data:action/MoveXYZ.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros2_data/action/detail/move_xyz__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_Goal_type_support_ids_t;

static const _MoveXYZ_Goal_type_support_ids_t _MoveXYZ_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_Goal_type_support_symbol_names_t _MoveXYZ_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_Goal)),
  }
};

typedef struct _MoveXYZ_Goal_type_support_data_t
{
  void * data[2];
} _MoveXYZ_Goal_type_support_data_t;

static _MoveXYZ_Goal_type_support_data_t _MoveXYZ_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_Goal_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_Goal>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_Goal)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_Result_type_support_ids_t;

static const _MoveXYZ_Result_type_support_ids_t _MoveXYZ_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_Result_type_support_symbol_names_t _MoveXYZ_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_Result)),
  }
};

typedef struct _MoveXYZ_Result_type_support_data_t
{
  void * data[2];
} _MoveXYZ_Result_type_support_data_t;

static _MoveXYZ_Result_type_support_data_t _MoveXYZ_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_Result_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_Result>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_Result)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_Feedback_type_support_ids_t;

static const _MoveXYZ_Feedback_type_support_ids_t _MoveXYZ_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_Feedback_type_support_symbol_names_t _MoveXYZ_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_Feedback)),
  }
};

typedef struct _MoveXYZ_Feedback_type_support_data_t
{
  void * data[2];
} _MoveXYZ_Feedback_type_support_data_t;

static _MoveXYZ_Feedback_type_support_data_t _MoveXYZ_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_Feedback_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_Feedback>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_Feedback)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_Request_type_support_ids_t;

static const _MoveXYZ_SendGoal_Request_type_support_ids_t _MoveXYZ_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_Request_type_support_symbol_names_t _MoveXYZ_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_SendGoal_Request)),
  }
};

typedef struct _MoveXYZ_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_Request_type_support_data_t;

static _MoveXYZ_SendGoal_Request_type_support_data_t _MoveXYZ_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_Request_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_SendGoal_Request>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_SendGoal_Request)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_Response_type_support_ids_t;

static const _MoveXYZ_SendGoal_Response_type_support_ids_t _MoveXYZ_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_Response_type_support_symbol_names_t _MoveXYZ_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_SendGoal_Response)),
  }
};

typedef struct _MoveXYZ_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_Response_type_support_data_t;

static _MoveXYZ_SendGoal_Response_type_support_data_t _MoveXYZ_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_Response_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_SendGoal_Response>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_SendGoal_Response)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_SendGoal_type_support_ids_t;

static const _MoveXYZ_SendGoal_type_support_ids_t _MoveXYZ_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_SendGoal_type_support_symbol_names_t _MoveXYZ_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_SendGoal)),
  }
};

typedef struct _MoveXYZ_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveXYZ_SendGoal_type_support_data_t;

static _MoveXYZ_SendGoal_type_support_data_t _MoveXYZ_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_SendGoal_service_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveXYZ_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros2_data::action::MoveXYZ_SendGoal>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_Request_type_support_ids_t;

static const _MoveXYZ_GetResult_Request_type_support_ids_t _MoveXYZ_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_Request_type_support_symbol_names_t _MoveXYZ_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_GetResult_Request)),
  }
};

typedef struct _MoveXYZ_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_Request_type_support_data_t;

static _MoveXYZ_GetResult_Request_type_support_data_t _MoveXYZ_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_Request_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_GetResult_Request>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_GetResult_Request)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_Response_type_support_ids_t;

static const _MoveXYZ_GetResult_Response_type_support_ids_t _MoveXYZ_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_Response_type_support_symbol_names_t _MoveXYZ_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_GetResult_Response)),
  }
};

typedef struct _MoveXYZ_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_Response_type_support_data_t;

static _MoveXYZ_GetResult_Response_type_support_data_t _MoveXYZ_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_Response_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_GetResult_Response>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_GetResult_Response)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_GetResult_type_support_ids_t;

static const _MoveXYZ_GetResult_type_support_ids_t _MoveXYZ_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_GetResult_type_support_symbol_names_t _MoveXYZ_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_GetResult)),
  }
};

typedef struct _MoveXYZ_GetResult_type_support_data_t
{
  void * data[2];
} _MoveXYZ_GetResult_type_support_data_t;

static _MoveXYZ_GetResult_type_support_data_t _MoveXYZ_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_GetResult_service_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveXYZ_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros2_data::action::MoveXYZ_GetResult>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveXYZ_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveXYZ_FeedbackMessage_type_support_ids_t;

static const _MoveXYZ_FeedbackMessage_type_support_ids_t _MoveXYZ_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveXYZ_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveXYZ_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveXYZ_FeedbackMessage_type_support_symbol_names_t _MoveXYZ_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_data, action, MoveXYZ_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_data, action, MoveXYZ_FeedbackMessage)),
  }
};

typedef struct _MoveXYZ_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveXYZ_FeedbackMessage_type_support_data_t;

static _MoveXYZ_FeedbackMessage_type_support_data_t _MoveXYZ_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveXYZ_FeedbackMessage_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveXYZ_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveXYZ_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveXYZ_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveXYZ_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveXYZ_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_data::action::MoveXYZ_FeedbackMessage>()
{
  return &::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros2_data, action, MoveXYZ_FeedbackMessage)() {
  return get_message_type_support_handle<ros2_data::action::MoveXYZ_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MoveXYZ_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros2_data

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ros2_data::action::MoveXYZ>()
{
  using ::ros2_data::action::rosidl_typesupport_cpp::MoveXYZ_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MoveXYZ_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ros2_data::action::MoveXYZ::Impl::SendGoalService>();
  MoveXYZ_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ros2_data::action::MoveXYZ::Impl::GetResultService>();
  MoveXYZ_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ros2_data::action::MoveXYZ::Impl::CancelGoalService>();
  MoveXYZ_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ros2_data::action::MoveXYZ::Impl::FeedbackMessage>();
  MoveXYZ_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ros2_data::action::MoveXYZ::Impl::GoalStatusMessage>();
  return &MoveXYZ_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
