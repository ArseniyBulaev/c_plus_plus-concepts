#include <iostream>

// Exception safety

template<typename T>
void g(){

}

template<typename T>
void f() noexcept(noexcept(g<T>)) {

} 

int main() {
	return 0;
}
