cmake_minimum_required(VERSION 3.15)

project(farlib)
set(CMAKE_CXX_STANDARD 17) # C++17 Standard

## Add C++ executables here
  add_executable(graph_test test/graph_test.cpp)
  target_link_libraries(graph_test ${PROJECT_NAME})

# Declare a C++ library
add_library(${PROJECT_NAME}
    src/control/pid.cpp
    src/planning/path-planning.cpp
    src/data/graph.cpp
)

# Include Header files
include_directories(
    include
)