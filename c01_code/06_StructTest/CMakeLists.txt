cmake_minimum_required(VERSION 3.0.0)
project(StructTest VERSION 0.1.0)

add_executable(StructTest structtest.cpp)
target_include_directories(StructTest PUBLIC employeestruct.h)