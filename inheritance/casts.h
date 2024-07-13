#pragma once

#include <iostream>

// Casts in case of inheritance

struct Base {
    int x = 1;
    Base() = default;
    Base(const Base & other): x(other.x) { std::cout << "Copy!";}
};

struct Derived: Base {
    int y = 2;
};

void f (Base b);
void cast_test();