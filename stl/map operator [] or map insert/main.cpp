#include <map>

class Widget{
public:
    Widget() = default;
    Widget(double weight){};
    Widget& operator=(double weight){ return *this;};
};

using std::map;

int main(){
    map<int, Widget> m;
    m[10] = 1.25;
    m[42] = 5;
    return 0;
}