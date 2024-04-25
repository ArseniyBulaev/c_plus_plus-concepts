#include <iostream>
#include <cstdint>
 
 enum class E: int8_t /* Type of enum values */ {
    // Explicit values
    White = 2,
    Grey = 5,
    Black = 1
 };

int main(){
    E e = E::White;
    std::cout << static_cast<int>(e);
    return 0;
}