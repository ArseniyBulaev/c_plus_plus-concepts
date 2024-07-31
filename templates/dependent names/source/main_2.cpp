#include <iostream>
#include <array>

// Dependent names

template<typename T>
struct S {
    template <int N>
    using A = std::array<int, N>;
};

template <>
struct S<double> {
    static const int A = 5;
};

//int x;

template <typename T>
void f() {
    typename S<T>::template A<10> x;
    // S<T>::A*x; // Expression by default
}

int main(){
    f<int>();
    return 0;
}