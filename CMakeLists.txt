cmake_minimum_required(VERSION 3.8)

project(KR1)

set (KR1_SRC  Main.cpp Autotest.cpp)
set (KR1_HDR Class.h)

add_executable (${PROJECT_NAME} ${KR1_SRC} ${KR1_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")