#include <iostream>

// Basic idea, basic examples


int main() {
    try {
        new int[1'000'000];

    } catch(std::logic_error& err){
        std::cout << err.what() << std::endl;
    }
}