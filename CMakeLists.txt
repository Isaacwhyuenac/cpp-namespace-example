cmake_minimum_required(VERSION 3.15)
project(my_foundation CXX)

add_library(my_foundation src/my_algorithm.cpp)
target_include_directories(my_foundation PUBLIC include)
#target_include_directories(my_foundation INTERFACE include)
#target_include_directories(my_foundation PRIVATE include/my_foundation)

set_target_properties(my_foundation PROPERTIES PUBLIC_HEADER "include/my_algorithm.h")
install(TARGETS my_foundation PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/include/my_foundation)