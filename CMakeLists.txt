cmake_minimum_required(VERSION 3.0)
project(colors)

file(GLOB sources lib/*.cpp)
add_library(colors STATIC ${sources})
set_property(TARGET colors PROPERTY CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall")

add_executable(colors_test test/test_colors.cpp)
target_link_libraries(colors_test colors)
include_directories(include)
set_property(TARGET colors_test PROPERTY CXX_STANDARD 11)

if (SPRUCE_INSTALL_DIR)
  message("installing to SPRUCE_INSTALL_DIR: ${SPRUCE_INSTALL_DIR}")
  install(TARGET colors DESTINATION SPRUCE_INSTALL_DIR)
endif ()
