cmake_minimum_required(VERSION 3.21)

project(ASanTest
    VERSION 1.0
    DESCRIPTION "ASAN test with cmake"
    LANGUAGES CXX)

include(../Sanitizers.cmake)

add_executable(test_asan)
target_sources(test_asan PRIVATE main.cpp)
target_link_libraries(test_asan PRIVATE project_options)
configure_sanitizers(test_asan)
