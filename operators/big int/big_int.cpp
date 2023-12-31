#include "big_int.h"

#include <cmath>
#include <stdexcept>


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
    numbers.reserve(str.size());
    for(size_t i = str.size() - 1; i >= 0; --i){
        if(isdigit(str[i])){
            numbers.push_back(str[i]);
        }
        else{
            throw std::invalid_argument("Input value is not a number");
        }
    }
}

#pragma endregion constructor