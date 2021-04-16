cmake_minimum_required(VERSION 3.17)
project(Projekt1 C)

set(CMAKE_C_STANDARD 11)

add_executable(Projekt1 main.c users.c users.h cards.c cards.h boards.h boards.c UserListBoard.c UserListBoard.h)