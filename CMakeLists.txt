cmake_minimum_required(VERSION 3.15)
project(my_foundation CXX)


add_library(my_foundation STATIC src/my_algorithm.cpp)
target_include_directories(my_foundation INTERFACE include)
target_include_directories(my_foundation PRIVATE include/my_foundation)

install(TARGETS my_foundation)
