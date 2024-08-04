#include <iostream>

struct A {
    A() {std::cout << "A";}
    A(const A&) {std::cout << "copy";}
    ~A() {std::cout << "~A";}
};

void f(int x) {
    A a;
    if (x == 0) {
        throw a;
    }
}

int main(){
    try{
        f(0);
    } catch (...){
        std::cout << "caught!";
        throw; // throw the same object
    }
    return 0;
}