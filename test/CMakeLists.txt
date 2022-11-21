cmake_minimum_required(VERSION 3.12)
project(SourceTil CXX)

enable_testing()

add_executable(${PROJECT_NAME}_unittest
    test.cpp
)

add_executable(${PROJECT_NAME}_mocks
    mocks/mocks.cpp
)

target_link_libraries(${PROJECT_NAME}_unittest
  GTest::gtest_main
  ${PROJECT_NAME}_objs
)

target_link_libraries(${PROJECT_NAME}_mocks
GTest::gmock_main
  ${PROJECT_NAME}_objs
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_unittest)
gtest_discover_tests(${PROJECT_NAME}_mocks)
