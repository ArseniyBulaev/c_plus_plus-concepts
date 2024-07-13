#include "memory_layout.h"
#include <iostream>


void memory_info(){
    std::cout << "Derived " << sizeof(Derived) << std::endl;
    std::cout << "EmptyDerived " << sizeof(EmptyDerived) << std::endl;
}