cmake_minimum_required(VERSION 3.0)

project(INIT_TABLE)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main_cmake src/main.cpp src/A.cpp src/B.cpp src/C.cpp)
