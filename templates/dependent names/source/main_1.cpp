#include <iostream>

// Dependent names

template<typename T>
struct S {
    using A = int;
};

template <>
struct S<double> {
    static const int A = 5;
};

int x;

template <typename T>
void f() {
    typename S<T>::A* x = new typename S<T>::A(5);
    // S<T>::A*x; // Expression by default
    std::cout << *x << std::endl;
    delete x;
}

int main(){
    f<int>();
    return 0;
}