cmake_minimum_required(VERSION 3.26)
project(SkipList)

set(CMAKE_CXX_STANDARD 17)

add_executable(SkipList main.cpp
        Node.h
        Node.cpp
        SkipList.h
        SkipList.cpp)
