cmake_minimum_required(VERSION 3.10)
project(BomMecanico)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(BomMecanico ${SOURCES})

add_subdirectory(tests)

enable_testing()
add_subdirectory(tests)