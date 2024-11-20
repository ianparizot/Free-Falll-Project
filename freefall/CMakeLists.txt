cmake_minimum_required(VERSION 3.29)
project(freefall C)

set(CMAKE_C_STANDARD 11)

add_executable(freefall main.c
        choice.h
        speed.h
        time.h)

if (UNIX)
    target_link_libraries(freefall m)
endif()
