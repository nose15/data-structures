cmake_minimum_required(VERSION 3.26)
project(lists C)

set(CMAKE_C_STANDARD 17)

add_executable(lists main.c linked_list/linked_list.c linked_list/node.c)
target_include_directories(lists PRIVATE ${CMAKE_SOURCE_DIR}/linked_list)
