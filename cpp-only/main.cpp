#include <iostream>

extern "C" {

auto leak() -> void {
    for (auto i = 0; i < 100; ++i) {
        new long long{};
    }
}

auto delete_non_mallocd() -> void {
    auto not_pointer = 0;
    delete &not_pointer;
}

}

int main() {
    std::cout << "Starting to leak...\n";
    leak();
    std::cout << "Done leaking.\n";

    std::cout << "Will delete local (stack) variable..." << std::endl;
    delete_non_mallocd();
    std::cout << "Done deleting local (stack) variable.\n";

}
