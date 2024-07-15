#include <iostream>
// Template specializations

template <typename T>
class vector {
    T * arr;
    size_t size;
    size_t cap;
};

// Full specialization
template <>
class vector<bool> {
    char * arr;
    size_t size;
    size_t cap;
};

template <typename T, typename U>
struct S {};

// Partial specialization
template <typename W>
struct S<W, W> {};