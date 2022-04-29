#include <pybind11/pybind11.h>
#include "leaker/leaker.h"

namespace py = pybind11;

PYBIND11_MODULE(leaker_py, m) {
    m.doc() = "A simple leaking python module.";

    m.def("nothing", &leaker::nothing, "A function does nothing.");
    m.def("leak_cpp_only", &leaker::leak_cpp_only, "A function that leaks a lot of longs.");
    m.def("leak_return_value", &leaker::leak_return_value, "A function that leaks the returned value.");
}
