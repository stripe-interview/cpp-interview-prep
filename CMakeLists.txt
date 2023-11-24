###
### CMake settings
###
# see http://www.cmake.org/Wiki/CMake_Policies

cmake_minimum_required(VERSION 3.4)

# enable MSVC_RUNTIME_LIBRARY target property
# see https://cmake.org/cmake/help/latest/policy/CMP0091.html
if(POLICY CMP0091)
  cmake_policy(SET CMP0091 NEW)
endif()

project(cpp-interview-prep CXX)

include(CheckCXXCompilerFlag)
include(CTest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_executable(boosttest src/boosttest.cpp)
endif()

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS})

add_executable(hello src/helloworld.cpp)
target_link_libraries(hello PRIVATE ${CURL_LIBRARIES})

add_subdirectory(test)
