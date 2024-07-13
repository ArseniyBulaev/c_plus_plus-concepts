#include "coplicated_examples_1.h"
#include <iostream>

void virtual_complicated_1_main()
{
    
}

void DerivedVC::f() const
{
    std::cout << 2 << std::endl;
}


void BaseVC::f() const
{
    std::cout << 1 << std::endl;
}