cmake_minimum_required(VERSION 3.22)
project(booksLib)

set(CMAKE_CXX_STANDARD 23)

file(GLOB SOURCES
        source/books.cpp
        source/books.hpp
        source/main.cpp
        )

add_executable(booksLib ${SOURCES})