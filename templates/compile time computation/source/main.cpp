#include <iostream>

// 6.5 Bisic compile time computations

template<int N>
struct Fibonacci {
    static constexpr int value = Fibonacci<N-1>::value + Fibonacci<N-2>::value; 
};

template<>
struct Fibonacci<0> {
    static constexpr int value = 0;
};

template<>
struct Fibonacci<1> {
    static constexpr int value = 1;
};

template<int N, int D>
struct IsPrimeHelper {
    static constexpr bool value = N % D == 0 ? false: IsPrimeHelper<N, D-1>::value;
};

template<int N>
struct IsPrimeHelper<N, 1> {
    static constexpr bool value = true;
};

template<int N>
struct IsPrime{
    static constexpr bool value = IsPrimeHelper<N, N-1>::value;
};

template<>
struct IsPrime<1>{
    static constexpr bool value = false;
};

template<int N>
constexpr bool is_prime = IsPrime<N>::value;

int main(){
    //std::cout << Fibonacci<20>::value;
    std::cout << is_prime<257> << std::endl;
    static_assert(is_prime<257>);
    return 0;
}