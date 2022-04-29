cmake_minimum_required(VERSION 3.21)

project(ASanMWETest
    VERSION 1.0
    DESCRIPTION "ASan usage Minimal Working Example for tests"
    LANGUAGES CXX)

include(Sanitizers.cmake)

add_library(project_options INTERFACE)
target_compile_features(project_options
    INTERFACE
        cxx_std_11
)

configure_sanitizers(project_options)

add_subdirectory(cpp-only)
add_subdirectory(leaker)
add_subdirectory(py-binding)
