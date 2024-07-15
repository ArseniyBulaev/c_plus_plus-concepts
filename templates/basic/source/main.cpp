// Idea of templates, basic examples
#include <map>

// Function templates
template <typename T>
void swap(T a, T b){
    T t = a;
    a = b;
    b = t;
}

template <typename T>
T max(T x, T y){
    return x > y ? x : y;
}


// Class templates
template <typename T>
class vector {
    T * array;
    size_t size;
    size_t cap;
};

// Using templates (since c++ 11)
template <typename T> 
using mymap = std::map<T, T, std::greater<T>>;

int main(){
    long long a = 1.0;
    int b = 2.0;
    swap<long long>(a, b);
}