cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(Lib VERSION 1.0.0 LANGUAGES CXX)

add_library(Lib
        include/TheClass.h
        include/TheInherited.h
        src/TheClass.cpp
        src/ThePrivateImplOfTheClass.cpp
        src/ThePrivateImplOfTheClass.h
        src/TheInherited.cpp
        )

target_include_directories(Lib
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        )

target_compile_options(Lib PRIVATE -Werror)
target_compile_features(Lib PRIVATE cxx_std_14)

add_subdirectory(tests)
