#include<iostream>

struct A {
	A(int x) {
		if(x == 0) throw 1;
		std::cout << "A";
	}
	~A() {std::cout << "~A";}
};

struct S {
	A a;
	A aa;
	A aaa;
	S() try : a(1), aa(0), aaa(2) {
		std::cout << "S";
	}
	catch (...) {
		std::cout << "caught!";
	}
	~S() {std::cout << "~S";} // not called 
};

int main() {
	S s;
	return 0;
}
