#include <iostream>

struct Base {
    int x;
    void f(int) { std::cout << 1;};
};

struct Derived: public Base {
    int y;
    void f(double) {std::cout << 2; }
};



int main(){
    Derived d;
    d.f(1); // 2
    return 0;
}