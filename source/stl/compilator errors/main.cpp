#include <iterator>
#include <iostream>
#include <string>
#include <vector>

// int main(){
//     std::string ex("bla");
//     std::vector<std::string *> v = {&ex};
//     // missing * in std::ostream_iterator template
//     std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//     return 0;
// }