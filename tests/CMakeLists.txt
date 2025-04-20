# Download Catch2 if not present
include(FetchContent)
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.5.2
)
FetchContent_MakeAvailable(catch2)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(BomMecanicoTests test_question.cpp)
target_link_libraries(BomMecanicoTests PRIVATE BomMecanicoLib gtest_main)

add_test(NAME BomMecanicoTests COMMAND BomMecanicoTests)
