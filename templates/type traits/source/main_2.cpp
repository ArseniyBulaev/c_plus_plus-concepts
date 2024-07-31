#include <iostream>
#include <type_traits> // since c++ 11

// Metafunctions and type traits

template <typename T, typename U>
struct is_same {
    static constexpr bool value = false;
};

template <typename T>
struct is_same<T,T> {
    static constexpr bool value = true;
};

template <typename T, typename U>
const bool is_same_v = is_same::value;

template <typename T>
struct remove_reference {
    using type = T;
};

template <typename T>
struct remove_reference<T&> {
    using type = T;
};

template <typename T>
void f(){
    typename remove_reference<T>::type x;
}

int main(){
    return 0;
}