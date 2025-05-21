cmake_minimum_required(VERSION 3.10)

project(aFactory)

set(CMAKE_CXX_STANDARD 11 REQUIRED)
set(CMAKE_C_STANDARD 11 REQUIRED)

add_library(aFactory abstrfactory.cpp)

target_include_directories(aFactory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})