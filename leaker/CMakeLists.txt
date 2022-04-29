cmake_minimum_required(VERSION 3.21)

project(Leaker
    VERSION 1.0
    DESCRIPTION "A leaking library"
    LANGUAGES CXX)

add_library(leaker)
target_sources(leaker
    PRIVATE
        leaker.cpp
)
target_link_libraries(leaker
    PUBLIC
        project_options
)
target_include_directories(leaker
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../"
)
