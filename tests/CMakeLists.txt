cmake_minimum_required(VERSION 3.14)
project(BomMecanicoTests)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
# Prevent GoogleTest from overriding our compiler/linker options
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(runTests test_question.cpp)
target_link_libraries(runTests PRIVATE BomMecanicoLib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
