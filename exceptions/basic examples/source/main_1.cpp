#include <iostream>

// Basic idea, basic examples

int divide (int a, int b){
    if(b == 0){
        throw std::logic_error("Divide by zero!");
    }
    return a / b;
}

int main() {
    try {
        divide(1, 0);
    } catch(std::logic_error& err){
        std::cout << err.what() << std::endl;
    }
}