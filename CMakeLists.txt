cmake_minimum_required(VERSION 3.15)

project(farlib)
set(CMAKE_CXX_STANDARD 14) # C++14 Standard

# Add executables here
add_executable(pid src/control/pid.cpp)

# Include Header files
include_directories(
    include
)