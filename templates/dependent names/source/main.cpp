#include <iostream>
#include <array>

// Dependent names

template <typename T>
struct Base {
    int x = 0;
};

template <>
struct Base<double> {
    using x = int;
};

template <>
struct Base<float> {

};

template <typename T>
struct Derived:Base<T> {
    void f(){
        ++this->x; // If we need to use field of template Base
    }
};

int main() {}