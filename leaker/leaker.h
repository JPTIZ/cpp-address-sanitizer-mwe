#ifndef MWE_LEAKER_H
#define MWE_LEAKER_H

namespace leaker {

auto nothing() -> void;
auto leak_cpp_only() -> void;
auto leak_return_value() -> long*;

}

#endif
