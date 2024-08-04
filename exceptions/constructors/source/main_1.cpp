#include<iostream>

struct A {
	A() {std::cout << "A";}
	~A() {std::cout << "~A";}
};

struct S {
	A a;
	S(int x) {
		std::cout << "S";
		if(x == 0) throw 1;
	}
	~S() {std::cout << "~S";} // not called 
};

int main() {
	try{
		S s(0);
	} catch(...) {

	}
	return 0;
}
