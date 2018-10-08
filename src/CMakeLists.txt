cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(App)

add_executable(App main.cpp)

target_link_libraries(App Lib)

target_compile_options(App PRIVATE -Werror)
target_compile_features(App PRIVATE cxx_std_14)
