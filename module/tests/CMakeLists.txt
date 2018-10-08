cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
enable_testing()
project(Tests)

add_executable(Tests
        TheClass_tests.cpp
        TheClassPrivateImpl_tests.cpp
        TInherited_tests.cpp
        )

target_link_libraries(Tests Lib gtest gmock gtest_main)

target_compile_options(Tests PRIVATE -Werror)
target_compile_features(Tests PRIVATE cxx_std_14)
