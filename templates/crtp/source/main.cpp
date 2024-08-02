#include <iostream>

// CRTP
// Curiously Recursive Template Pattern

template<typename T>
struct Base
{
    void interface(){
        static_cast<T*>(this)->implementation();
    }

    static void static_func() {
        T::static_sub_func();
    }
};

struct Derived: Base<Derived>
{
    void implementation(){
        std::cout << "Hello from derived " << std::endl;
    }
    static void static_func();
};

int main() {
    Base<Derived> base;
    base.interface();
}
 