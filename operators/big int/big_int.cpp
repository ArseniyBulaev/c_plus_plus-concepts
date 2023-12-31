#include "big_int.h"

#include <cmath>
#include <stdexcept>

bool BigInt::is_number(const std::string & str){
    auto str_it = std::cbegin(str);
    if(*str_it == '-') ++str_it;
    while(str_it != str.cend()){
        char symbol = *str_it;
        if(!isdigit(symbol)) return false;
    }
    return true;
}

std::string BigInt::construct_from(const std::string & str){
    if (!is_number(str)) throw std::invalid_argument("Input value is not a number");
    std::string numbers = "";
    // Preallocate memory
    numbers.reserve(str.size());
    // Copy in reverse order
    std::copy_backward(str.begin(), str.end(), numbers.end());
    return numbers;
}


#pragma regin constructor
BigInt::BigInt(long long n){
    is_negative = (abs(n) != n);
    do{
        numbers.push_back(n % 10);
        n /= 10;
    } while(n != 0);
}
BigInt::BigInt(const BigInt & big_int):numbers(big_int.numbers), is_negative(big_int.is_negative){}

BigInt::BigInt(const std::string & str){
    // Determine sign
    is_negative = (str[0] == '-');
    // Construct
    numbers = construct_from(str);
}

#pragma endregion constructor


#pragma region friend
std::ostream & operator << (std::ostream & os, const BigInt & big_int){
    if(big_int.is_negative) std::cout << "-";
    for(size_t i = big_int.numbers.size() - 1; i >= 0; --i){
        std::cout << big_int.numbers[i];
    }
}

std::istream & operator >> (std::istream & is, BigInt & big_int){

}

#pragma endregion friend