#pragma once

#include <string>


class BigInt{
private:
    // Numbers in reverse order
    std::string numbers = "";
    // Sign
    bool is_positive = true;
public:
    // Constructor
    BigInt(long long n);
    BigInt(const BigInt & big_int);
    BigInt(const std::string & str);


};