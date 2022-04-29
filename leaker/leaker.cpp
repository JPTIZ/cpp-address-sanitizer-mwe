#include "leaker.h"

auto leaker::nothing() -> void {
    return;
}

auto leaker::leak_cpp_only() -> void {
    for (auto i = 0; i < 100; ++i) {
        new long long{};
    }
}

auto leaker::leak_return_value() -> long* {
    return new long[200];
}
