cmake_minimum_required(VERSION 3.10)

project(app)

set(PRINT_VERSION_MAJOR 0)
set(PRINT_VERSION_MINOR 1)
set(PRINT_VERSION_PATCH 0)
set(PRINT_VERSION_TWEAK 0)
set(PRINT_VERSION
  ${PRINT_VERSION_MAJOR}.${PRINT_VERSION_MINOR}.${PRINT_VERSION_PATCH}.${PRINT_VERSION_TWEAK})

set(CMAKE_CXX_STANDARD 11 REQUIRED)
set(CMAKE_C_STANDARD 11 REQUIRED)

add_executable(app src/main.cpp)

add_subdirectory(aFactory ${CMAKE_BINARY_DIR}/aFactory)
target_link_libraries(app aFactory)


option(BUILD_TESTS "Build tests" OFF)

if(BUILD_TESTS)
  enable_testing()
  set(INSTALL_GTEST OFF)
  add_subdirectory(third-party/gtest)
  file(GLOB all_TEST_SOURCES tests/*.cpp)
  add_executable(factorTest ${all_TEST_SOURCES})
  target_link_libraries(factorTest aFactory gtest_main gmock_main)
  add_test(NAME factorTest COMMAND factorTest)
endif()



install(TARGETS app
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        PUBLIC_HEADER DESTINATION include/
)

install(TARGETS aFactory
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        PUBLIC_HEADER DESTINATION include/
)


include(CpackConfig.cmake)