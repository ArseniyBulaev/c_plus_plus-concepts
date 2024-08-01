#include <iostream>
#include <type_traits>

// Fold expressions (since c++17)


template <typename... Types>
struct all_pointers {
    static const bool value = (std::is_pointer_v<Types> && ...); // (std::is_pointer_v<Types> && ... ) - это fold expression
};

template <typename... Types>
bool all_pointers_v = all_pointers<Types...>::value;

template <typename Head, typename... Tail>
struct is_homogeneous {
    static const bool value = (std::is_same_v<Head, Tail> && ...);
};

template <typename... Types>
void print(const Types & ... types) {
    (std::cout << ... << types );
    std::cout << std::endl;
};


int main(){
    print("aba", 1, 23.0);
    std::cout << all_pointers_v<int *, double *> << std::endl;
    std::cout << all_pointers_v<int, double *> << std::endl;
    return 0;
}