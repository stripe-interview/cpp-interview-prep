###
### CMake settings
###
# see http://www.cmake.org/Wiki/CMake_Policies

cmake_minimum_required(VERSION 3.1)

project(cpp-interview-prep)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello src/helloworld.cpp)
