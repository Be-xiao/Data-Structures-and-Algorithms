cmake_minimum_required(VERSION 3.0)

project(lesson02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(lesson02_exe src/main.c src/SeqList.c)