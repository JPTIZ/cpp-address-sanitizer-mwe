cmake_minimum_required(VERSION 3.21)

project(PyBind11ASanTest
    VERSION 1.0
    DESCRIPTION "ASAN test with PyBind11 and cmake"
    LANGUAGES CXX)

find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(leaker_py
    leaker_py.cpp
)

target_link_libraries(leaker_py
    PRIVATE
        pybind11::module
        leaker
)
