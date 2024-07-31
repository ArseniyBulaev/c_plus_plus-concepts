#include <iostream>
#include <string>

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
void f(T x, U y){
    // ...
    if constexpr (is_same<T,U>::value){
        x = y;
    }
    // ...
}

int main(){
    f<int,std::string>(2, "aba");
    return 0;
}