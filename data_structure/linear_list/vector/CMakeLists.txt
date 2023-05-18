cmake_minimum_required(VERSION 3.25)
project(test_ky C)

set(CMAKE_C_STANDARD 11)

include_directories(data_structure/linear_list/vector)

add_executable(test_ky
        data_structure/linear_list/vector/vector.c
        data_structure/linear_list/vector/vector.h)
