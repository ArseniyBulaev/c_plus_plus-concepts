#include <iostream>
#include <vector>

// deque internals


int main() {
	std::vector<int> v(10);
	int & x = v[5];  // reference invalidation. deque doesn't do it
	v.push_back(1);
	std::cout << x;
	return 0;
}
