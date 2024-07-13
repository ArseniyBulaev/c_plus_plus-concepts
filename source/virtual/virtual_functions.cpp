#include "../include/virtual/virtual_functions.h"
#include <iostream>

void virtual_functions_main()
{
    DerivedV d;
    BaseV & b = d;
    b.f();
}

void DerivedV::f()
{
    std::cout << 2 << std::endl;
}

DerivedV::~DerivedV()
{
    delete p;
    std::cout << "p has been deleted" << std::endl;
}

void BaseV::f()
{
    std::cout << 1 << std::endl;
}
