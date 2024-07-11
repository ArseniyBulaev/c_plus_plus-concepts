#pragma once

// Empy base optimization EBO

struct EmptyBase {
    void f() {}
};

struct EmptyDerived: EmptyBase {
    double y;
    void g() {}
};

struct Base {
    int x;
    Base(int x): x(x) {}
};

struct Derived: Base {
    double y;
    Derived(int y, int x): Base(x), y(y) {}
};

void memory_info();
