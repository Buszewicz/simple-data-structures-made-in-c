cmake_minimum_required(VERSION 3.29)
project(simple_linked_list C)

set(CMAKE_C_STANDARD 11)

add_executable(simple_linked_list main.c
        list.c
        list.h)
