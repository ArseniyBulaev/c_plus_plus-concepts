#include <iostream>
// Template functions overloading

// 1
template <typename T>
void f(T x) {
    std::cout  << "T version " << x << std::endl;
}


// 2
void f(int x) {
    std::cout << "int version " << x << std::endl;
}

int main() {
    int x = 0;
    // Выберется версия от int. Частное лучше общего
    f<long long>(x); // Выберется 1
    f(x); // Выберется 2
    f<int>(x); // Выберется 1

}