cmake_minimum_required(VERSION 3.21)
project(TestFirstProgramming)

set(CMAKE_CXX_STANDARD 20)
add_executable(TestFirstProgramming main.cpp Test/catch.hpp Test/Test.h Stack.h Test/TestStack.h)
