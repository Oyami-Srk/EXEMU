cmake_minimum_required(VERSION 3.16)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

project(EXEMU-for-HP39gii VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 11)

aux_source_directory(EXEMU SRCS)
add_executable(exemu ${SRCS})