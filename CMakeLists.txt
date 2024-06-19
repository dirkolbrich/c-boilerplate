cmake_minimum_required(VERSION 3.29)

project(Boilerplate
    VERSION 1.0
    DESCRIPTION "A C++ boilerplate project."
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src/boilerplate)

add_subdirectory(examples)