cmake_minimum_required(VERSION 3.0)
project(colors CXX)
file(GLOB sources lib/*.cpp)
add_library(colors STATIC ${sources})
add_executable(colors_test test/test_colors.cpp)
target_link_libraries(colors_test colors)
include_directories(include)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall -Wextra --std=c++11 -g")

