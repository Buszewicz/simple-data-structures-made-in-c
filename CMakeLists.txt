cmake_minimum_required(VERSION 3.29)
project(simple_data_structures C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_data_structures main.c
        List/list.c
        List/list.h
        Stack/stack.c
        Stack/stack.h
        Queue/queue.c
        Queue/queue.h
        Stack/stack.c)
