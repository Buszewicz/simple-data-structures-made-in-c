cmake_minimum_required(VERSION 3.29)
project(simple_data_structures C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_data_structures main.c
        list.c
        list.h
        stack.c
        stack.h
        queue.c
        queue.h)
