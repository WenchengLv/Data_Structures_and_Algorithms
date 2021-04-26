cmake_minimum_required(VERSION 3.17)
project(Leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        include
)

add_executable(Leetcode main.cpp include/5_Stack.h
        include/DSF/DSF.h
        include/EightQueen.h
        include/dp/198.h
        include/2_SinglyLinkedList.h
        include/3_string.h)