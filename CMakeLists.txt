# Minimum required CMake version
cmake_minimum_required(VERSION 3.15)

# Project name & programming language
project(Multithreaded-SIMD-Inference VERSION 1.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Final build target
add_executable(MSI
    main.cpp
)