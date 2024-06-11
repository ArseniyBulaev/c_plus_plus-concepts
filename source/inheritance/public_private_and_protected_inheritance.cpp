#include <iostream>

struct Granny {
    int x = 1;
    void f() {};
};

struct Mom: protected Granny {
    int y = 2;
    void g() {}
};

struct Son: public Mom {
    int z = 3;
    void h() { std::cout << x << std::endl; }
};

int main(){
    Son s;
    std::cout << s.y << std::endl;
    s.h();
    return 0;
}