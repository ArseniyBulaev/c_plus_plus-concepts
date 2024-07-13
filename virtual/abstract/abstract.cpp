#include "abstract.h"
#include <iostream>

double Square::area() const
{
    return a * a;
}

void abstract_test(){
    Square sq(2.0);
    ShapeA & s = sq;
    std::cout << s.area() << std::endl;
}