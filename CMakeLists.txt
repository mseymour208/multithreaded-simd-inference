# Minimum required CMake version
cmake_minimum_required(VERSION 3.15)

# Project name & programming language
project(Multithreaded-SIMD-Inference VERSION 1.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Default to a Release build type
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Strict warning & optimization flags
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(
        -Wall
        -Wextra
        -Wpedantic
        -Wshadow
        -O3
        -march=native
    )
endif()

# Source file structure
add_executable(MSI
    main.cpp
)