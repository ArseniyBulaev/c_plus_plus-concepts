#pragma once
#include <iostream>

struct Granny {
    // friend int main();
    friend struct Son;
    friend struct Mom;
private:
    int x = 1;
    void f() {};
};

struct Mom: public Granny {
    // friend struct Son;
    int y = 2;
    void g() {std::cout << x << std::endl; }
};

struct Son: public Mom {
    int z = 3;
    void h() { std::cout << x << std::endl; }
};

// int main(){
//     Son s;
//     // std::cout << s.x << std::endl;
//     std::cout << s.y << std::endl;
//     s.h();
//     return 0;
// }