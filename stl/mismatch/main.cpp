#include <algorithm>
#include <vector>
#include <iostream>

using std::cout, std::endl;

int main(){
    typedef std::vector<int> IntVec;
    IntVec v1 = {1,2,3,4,5};
    IntVec v2 = {1,2,3,3,5};
    std::pair<IntVec::iterator, IntVec::iterator> first_mismatch = std::mismatch(v1.begin(), v1.end(), v2.begin());
    if(first_mismatch.first != v1.end() && first_mismatch.second != v2.end()){
        cout << *(first_mismatch.first) << " " << *(first_mismatch.second) << endl;
    }
    return 0;
}