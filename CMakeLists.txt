cmake_minimum_required(VERSION 3.15)
project(my_foundation CXX)




add_library(my_foundation src/my_algorithm.cpp)
#target_include_directories(my_foundation PUBLIC include)
target_include_directories(my_foundation PRIVATE include/my_foundation include)
target_include_directories(my_foundation INTERFACE include)

set_target_properties(my_foundation PROPERTIES PUBLIC "include/my_algorithm.h")
install(TARGETS my_foundation)
