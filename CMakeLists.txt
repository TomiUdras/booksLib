cmake_minimum_required(VERSION 3.22)
project(booksLib)

set(CMAKE_CXX_STANDARD 23)

file(GLOB SOURCES
        source/books.cpp
        source/books.hpp
        source/main.cpp
        source/func_to_test.cpp
        )

add_executable(booksLib ${SOURCES})
add_executable(booksLib_test source/test.cpp source/doctest.h)
target_link_libraries(booksLib_test doctest)

add_test(NAME Test COMMAND Test —force-colors -d)
add_custom_target(cloud-test COMMAND Test —force-colors -d)