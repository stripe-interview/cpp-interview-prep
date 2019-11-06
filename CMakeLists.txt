###
### CMake settings
###
# see http://www.cmake.org/Wiki/CMake_Policies

cmake_minimum_required(VERSION 3.1)

project(cpp-interview-prep)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_executable(boosttest src/boosttest.cpp)
endif()

find_package(CURL CONFIG REQUIRED)

add_executable(hello src/helloworld.cpp)
target_link_libraries(hello PRIVATE CURL::libcurl)