#pragma once

#include <string>
#include <iostream>


class BigInt{
private:
    // Numbers in reverse order
    std::string numbers = "";
    // Sign
    bool is_negative = true;
    // Help
    static bool is_number(const std::string & str);
    static std::string construct_from(const std::string & str);
public:
    // Constructor
    BigInt(long long n);
    BigInt(const BigInt & big_int);
    BigInt(const std::string & str);

    //Friend
    friend std::ostream & operator << (std::ostream & os, const BigInt & big_int);
    friend std::istream & operator >> (std::istream & is, BigInt & big_int);

};