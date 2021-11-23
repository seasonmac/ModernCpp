cmake_minimum_required(VERSION 3.20)
project(ModernCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
include_directories(include)
add_executable(ModernCpp
        main.cpp
        src/Sequence_containers/VectorTest.cpp
        include/Logger.h)
