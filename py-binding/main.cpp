#include <iostream>
#include "leaker.h"

int main() {
    std::cout << "Starting to leak...\n";

    leaker::nothing();
    leaker::leak_cpp_only();
    leaker::leak_return_value();

    std::cout << "Done leaking.\n";
}
