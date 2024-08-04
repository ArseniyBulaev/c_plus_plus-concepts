#include<iostream>


struct S {
	
	S() {
		std::cout << "S";
	}
	
	~S() noexcept(false) {
		std::cout << "~S";
		if (!std::uncaught_exceptions()){
			throw 1;
		}
	} 
};

int main() {
	try{
		S s;
		throw 1;
	} catch (...) {

	}
	return 0;
}
