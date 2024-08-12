#include <iostream>
#include <iterator>

// Iterators
/*
	Iterator class should support:
	 	* increment
	 	* dereference
		* comparision with another iterator 
*/

/*
	Classification (abstraction. Not class):
	Outpu Iterator

	Input Iterator
		|
	Forward Iterator (forward list, unordered set, unordered map)
		|
	Bidirectional Iterator (list, set, map)
		|
	RandomAccess Iterator (deque)
		|
	Contiguous Iterator (vector, array, T*)

*/

template<typename InputIterator>
void find_most_often_number(InputIterator begin, InputIterator end){
	typename std::iterator_traits<InputIterator>::value_type x = *begin;
}

template<typename Iterator>
typename std::iterator_traits<Iterator>::difference_type
distance(Iterator first, Iterator last){
	if constexpr (std::is_base_of_v<
		std::random_access_iterator_tag,
		typename std::iterator_traits<Iterator>::iterator_category
		>) {
		return last - first;
	}

	int i = 0;
	for(; first != last; ++i, ++first);
	return i;
}

int main() {
	return 0;
}
