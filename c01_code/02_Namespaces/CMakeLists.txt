cmake_minimum_required(VERSION 3.0.0)
project(Namespaces VERSION 0.1.0)

add_executable(Namespaces usingnamespaces.cpp namespaces.cpp)
target_include_directories(Namespaces PUBLIC namespaces.h)