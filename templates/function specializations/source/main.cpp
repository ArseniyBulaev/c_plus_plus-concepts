#include <iostream>
// Functions specializations

template <typename T, typename U>
void f(T, U){
    std::cout << 1 << std::endl;
}


template <typename T>
void f(T, T){
    std::cout << 2 << std::endl;
}

template<>
void f(int, int){
    std::cout << 3 << std::endl;
}

int main(){
    f(0,0);
    return 0;
}