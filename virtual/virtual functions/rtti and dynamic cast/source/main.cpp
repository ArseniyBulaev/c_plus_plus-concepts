/*
INFO
1. dynamic cast нужно использовать только тогда,
когда необходимо произоводить cast в runtime
2. syzeof(polymorfic type) minimum = 8 bytes

*/


#include <iostream>

struct Base {
    int x = 0;
    virtual void f() {}
    virtual ~Base() {}
};

struct Derived: Base {
    int y = 0;
    void f() override {}
};


int main(){
    Derived d;
    Base & b = d;
    std::cout << typeid(b).name() << std::endl;
    Derived dd = dynamic_cast<Derived &>(b); 
    return 0;
}