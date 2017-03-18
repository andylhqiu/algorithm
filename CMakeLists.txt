cmake_minimum_required(VERSION 3.6)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ballthrow/ballthrow.cpp ballthrow/ballthrow.h common/comm.h add2numlinked/add_2_num_linked.cpp add2numlinked/add_2_num_linked.h)
add_executable(algorithm ${SOURCE_FILES})