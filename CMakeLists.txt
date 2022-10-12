cmake_minimum_required(VERSION 3.23)
project(CPSC_1020)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab5)

add_executable(CPSC_1020
        lab5/*.cpp
        lab5/*.h)
