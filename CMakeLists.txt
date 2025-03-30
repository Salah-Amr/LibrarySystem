cmake_minimum_required(VERSION 3.28)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp
        Book.h
        Book.cpp
        EBook.h
        EBook.cpp
        PrintedBook.h
        PrintedBook.cpp
        User.h
        User.cpp
        UserManagement.h
        UserManagement.cpp
        BookManagement.h
        BookManagement.cpp
        Library.h
        Library.cpp
)
