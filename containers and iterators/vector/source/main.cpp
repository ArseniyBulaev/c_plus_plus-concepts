#include <iostream>
#include <vector>

// vector implemetation

template<typename T>
class vector {
	T* arr_;
	size_t cap_;
	size_t sz_;

	void reserve(size_t newcap){
		if(newcap < cap_) {
			return;
		}

		T * newarr = reinterpret_cast<T*>(new char[newcap * sizeof(T)]); // 1
		size_t index;

		try{
			for(index = 0; index < sz_; ++index) {
				new(newarr + index) T(arr[index]); // placement new
			}
		}
		catch (...) {
			for(size_t old_index = 0 i < index; ++old_index){
				(newarr + old_index)->~T();
			}
			delete[] reinterpret_cast<char *>(newarr);
			throw;
		}

		for(size_t index = 0; index < sz_;) {
			(arr_ + index)->~T();
		}
		delete[] reinterpret_cast<char *>(arr_);

		arr_ = newarr;
		cap_ = newcap;
	}

	void push_back(const T& value){
		if(sz_ == cap_){
			reserve(cap_ > 0 ? cap_  * 2 : 1);
		}
	}
};

struct S {
	int x;
	S(int x): x(x) {}
};

template <>
class vector<bool> {
	char * arr_;
	size_t sz_;
	size_t cap_;
	struct BitReference {
		char* cell;
		uint8_t index;
		BitReference(char * cell, uint8_t index)
			: cell(cell), index(index) {}

		BitReference operator=(bool b) {
			if(b){
				*cell |= (1 << index);
			} else {
				*cell &= ~(1 << index);
			}
			return *this;
		}

		operator bool() const {
			return *cell & (1 << index);
		}
	};
public:
	BitReference operator[](size_t index) {
		return BitReference(arr_ + index/8, index % 8);
	}
};

int main() {
	std::vector<S> v;
	v.push_back(S(1));
	return 0;
}
