#include "coplicated_examples_2.h"
#include <iostream>

void virtual_complicated_2_main()
{
    MomVC m;
    GrannyVC & g = m;
    g.f();
}

void MomVC::f() const
{
    std::cout << 2 << std::endl;
}


void GrannyVC::f() const
{
    std::cout << 1 << std::endl;
}

void SonVC::f() const
{
    std::cout << 3 << std::endl;
}