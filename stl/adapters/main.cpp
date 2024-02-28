#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>

using std::cout, std::endl;

class C{
public:
    C(int field):field(field) {}
    void print(){cout << field << endl;}
private:
    int field;
};


int main(){
    std::vector<C> c_objects = {1,2,3,4};
    std::for_each(c_objects.begin(), c_objects.end(), std::mem_fn(&C::print));
    return 0;
}