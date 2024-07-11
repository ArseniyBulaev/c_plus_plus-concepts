#pragma once

struct Base {
    int x;
};

struct Derived: Base {
    double y;
};

void memory_info();
