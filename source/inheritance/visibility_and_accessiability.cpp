#include <iostream>

struct Base {
    int x;
    void f() { std::cout << 1;};
};

struct Derived: public Base {
    int y;
    void f() {std::cout << 2; }
};



int main(){
    Derived d;
    d.f(); // 2
    return 0;
}