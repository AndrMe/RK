cmake_minimum_required(VERSION 3.10)

project(app)

set(CMAKE_CXX_STANDARD 11 REQUIRED)
set(CMAKE_C_STANDARD 11 REQUIRED)

add_executable(app src/main.cpp)

add_subdirectory(aFactory ${CMAKE_BINARY_DIR}/aFactory)
target_link_libraries(app aFactory)


option(BUILD_TESTS "Build tests" OFF)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB all_TEST_SOURCES tests/*.cpp)
  add_executable(factorTest ${all_TEST_SOURCES})
  target_link_libraries(factorTest aFactory gtest_main gmock_main)
  add_test(NAME factorTest COMMAND factorTest)
endif()