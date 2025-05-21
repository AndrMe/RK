cmake_minimum_required(VERSION 3.10)

project(app)

set(CMAKE_CXX_STANDARD 11 REQUIRED)
set(CMAKE_C_STANDARD 11 REQUIRED)

add_executable(app src/main.cpp)


add_subdirectory(abstractFactory)

target_link_libraries(app aFactory)