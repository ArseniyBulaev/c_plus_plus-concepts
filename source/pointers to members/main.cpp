 #include <iostream>

struct S {
    int x;
    double y;

    void f(int z){
        std::cout << x + z;
    }
};

// int main(){
//     // Pointer to field.
//     // Number, storing shift, relative to structure begin.
//     int S::* p = &S::x; 
//     S s{1, 3.14};
//     // .* - operator
//     std::cout << s.*p << std::endl;
//     S * ps = &s;
//     // ->* - operator
//     std::cout << ps->*p << std::endl;
//     // Pointer to method
//     void (S::* pf)(int) = &S::f;
//     (s.*pf)(3);
//     (ps->*pf)(5);

//     return 0;
// }