#include <iostream>
#include <vector>

// Difference between exceptions and runtime errors

int main(){
    std::vector<int> v;
    int x;
    std::cin >> x;

    try {
        std::cout << 5 / x;
        v[1'000'000] = 1;
    } catch (...) {
        std::cout << "Caught!";
    }
}