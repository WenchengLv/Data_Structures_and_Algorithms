cmake_minimum_required(VERSION 3.17)
project(Leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        include
)

add_executable(Leetcode main.cpp include/5_Stack.h)