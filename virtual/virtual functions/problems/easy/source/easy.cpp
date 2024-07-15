#include <iostream>

// Non obvious problems with virtual functions

struct Base {
    int x;
    // static virtual void f() {} // Nonsense
    // virtual void f(); // Linker Error (Method without definition)
    void f();
};

struct Derived: Base {
    
};



int main(){

    // Derived d;
}