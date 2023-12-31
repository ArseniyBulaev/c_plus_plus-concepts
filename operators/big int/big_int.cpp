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


#pragma regin constructor
BigInt::BigInt(long long n){
    is_positive = (abs(n) == n);
    do{
        numbers.push_back(n % 10);
        n /= 10;
    } while(n != 0);
}
BigInt::BigInt(const BigInt & big_int):numbers(big_int.numbers), is_positive(big_int.is_positive){}

BigInt::BigInt(const std::string & str){
    // Preallocate memory
    numbers.reserve(str.size());
    // Determine sign
    is_positive = (str[0] != '-');

    if (!is_number(str)) throw std::invalid_argument("Input value is not a number");

    for(auto str_it = str.rbegin(); str_it != str.rend(); ++str_it){
        // Here we are sure that input str is a number
        char number = *str_it;
        numbers.push_back(number);
    }
}

#pragma endregion constructor


#pragma region friend
std::ostream & operator << (std::ostream & os, const BigInt & big_int){
    if(!big_int.is_positive) std::cout << "-";
    for(size_t i = big_int.numbers.size() - 1; i >= 0; --i){
        std::cout << big_int.numbers[i];
    }
}

std::istream & operator >> (std::istream & is, BigInt & big_int){

}

#pragma endregion friend