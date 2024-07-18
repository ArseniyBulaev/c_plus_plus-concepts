#include <iostream>
#include <array>
#include <vector>

// Non-type template parameters

template <typename T, size_t N>
class array {
    T arr[N];
};

template <size_t M, size_t N, typename Field=double>
class Matrix {};

template<size_t N, typename Field=double>
using SquareMatrix = Matrix<N,N,Field>;

template <size_t M, size_t K, size_t N, typename Field=double>
Matrix<M, N, Field> operator * (const Matrix<M,K,Field> & a, const Matrix<K,N,Field> & b);

// Template template parameters
template <typename T, template<typename, typename> class Container = std::vector>
class Stack {
    Container <T, std::allocator<T>> contaier;
};

int main(){
    // std::array<int, 100 /*nttp*/ > a;
    Stack<int, std::vector> mystack;
    return 0;
}