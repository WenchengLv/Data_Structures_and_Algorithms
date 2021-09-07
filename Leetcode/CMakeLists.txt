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
        include/LinkedList/2_SinglyLinkedList.h
        include/3_string.h
        include/dp/5.h
        include/dp/5_v2.h
        include/stack/42.h
        include/dp/62.h
        include/dp/63.h
        include/dp/70_climbStairs.h
        include/dp/32_longestValidParentheses.h
        include/LinkedList/19_DeleteNode.h include/LinkedList/21_mergeTwoLists.h
        include/LinkedList/61_rotateRight.h include/LinkedList/91_reverseBetween.h include/LinkedList/141_hasCycle.h include/string/8_myAtoi.h)