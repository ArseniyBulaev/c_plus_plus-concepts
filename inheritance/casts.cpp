#include "casts.h"

void f (Base b){
    std::cout << b.x << std::endl;
}

void cast_test(){
    Derived d;
    f(d);
}