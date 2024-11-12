cmake_minimum_required(VERSION 3.10)

project(LibraryProject)

set(CMAKE_CXX_STANDARD 23)

set(SOURCES
    main.cpp
    Book.cpp
    DVD.cpp
    Magazine.cpp
    Library.cpp
    LibraryItem.cpp
)

add_executable(myLibrary ${SOURCES})
