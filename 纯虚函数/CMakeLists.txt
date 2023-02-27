cmake_minimum_required(VERSION 3.0)

project(PURE_VIRTUAL)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main_cmake src/main.cpp src/pure_virtual.cpp)