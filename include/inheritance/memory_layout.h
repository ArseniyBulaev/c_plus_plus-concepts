#pragma once

// Empy base optimization EBO

struct EmptyBase {
    void f() {};
};

struct EmptyDerived: EmptyBase {
    double y;
    void g() {};
};

struct Base {
    int x;
};

struct Derived: Base {
    double y;
};

void memory_info();
