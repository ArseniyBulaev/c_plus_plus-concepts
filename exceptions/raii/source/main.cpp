#include <iostream>

// RAII
// Resource Acquisition Is Initialization

template<typename T>
struct unique_ptr {
    T * p;
    unique_ptr(T * p): p(p) {}
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr & operator=(const unique_ptr &) = delete;
    ~unique_ptr() {delete p;}
    int & operator *() { return *p;}
};

void g(unique_ptr<int> & p){
    if(*p == 0) {
        throw 1;
    }
}

void f(int x) {
    unique_ptr<int> w(new int(x));
    g(w);
}

int main(){
    f(5);
    return 0;
}