cmake_minimum_required(VERSION 3.15)
project(my_foundation CXX)

set (CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(my_foundation STATIC src/my_algorithm.cpp)
target_include_directories(my_foundation INTERFACE include)
target_include_directories(my_foundation PRIVATE include/my_foundation)

install(TARGETS my_foundation
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/include/my_foundation
)