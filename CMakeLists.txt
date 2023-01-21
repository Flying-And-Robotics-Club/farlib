cmake_minimum_required(VERSION 3.15)

project(farlib)
set(CMAKE_CXX_STANDARD 14) # C++14 Standard

## Add C++ executables here
# add_executable(pid src/control/pid.cpp)

# Declare a C++ library
add_library(${PROJECT_NAME}
  src/control/pid.cpp
  src/planning/path-planning.cpp
)

# Include Header files
include_directories(
    include
)