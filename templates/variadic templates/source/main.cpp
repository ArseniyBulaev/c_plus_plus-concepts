#include <iostream>
#include <type_traits>

// Variadic templates (since c++11)


template <typename First, typename Second, typename... Types>
struct is_homogeneous{
    static constexpr bool value = std::is_same_v<First, Second>
    && is_homogeneous<Second,Types...>::value;
};

template <typename First, typename Second>
struct is_homogeneous<First, Second> {
    static constexpr bool value = std::is_same_v<First, Second>;
};

void print(){

}

template <typename Head, typename ... Tail>
void print(const Head & head, const Tail &... tail){
    std::cout << head << ' ' << std::endl;
    print(tail...);
    std::cout << sizeof...(tail) << std::endl;
}

int main(){
    print("abs", 1, 2.0);
    return 0;
}