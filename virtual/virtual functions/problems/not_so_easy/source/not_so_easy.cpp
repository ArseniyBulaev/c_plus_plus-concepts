#include <iostream>

struct Base {
    virtual void h() = 0;
    void f() {
        std::cout << "f";
        h(); // Runtime-error (Pure virtual function call)
    }
    Base() {
        std::cout << "Base";
        // h(); // Link-error
        f();
    }
    virtual ~Base() = default;
};

struct Derived: Base {
    void h() override {
        std::cout << "h";
    }
    Derived() {
        std::cout << "Derived";
    }
};

int main() {
    Derived d;
}