#include <iostream>
#include <string>

class Base {
private:
    const std::string & _name;
public:
    Base(const std::string & name):_name(name) {}
    virtual const std::string name() {return _name;}
    static Base * derived1(const std::string & name);
    static Base * derived2(const std::string & name);
    virtual void some_abstract_method() = 0;
};

class Derived1 : public Base {
public:
    Derived1(const std::string & name);
    void some_abstract_method();
};

class Derived2: public Base {
public:
    Derived2(const std::string & name);
    void some_abstract_method();
};

Base * Base::derived1(const std::string & name) {
        return new Derived1(name);
}
Base * Base::derived2(const std::string & name) {
        return new Derived2(name);
}


Derived1::Derived1(const std::string & name): Base(name) {}
void Derived1::some_abstract_method() {}


Derived2::Derived2(const std::string & name): Base(name) {}
void Derived2::some_abstract_method() {}


int main(){
    Base * derived1 = Base::derived1("derived1");
    std::cout << derived1->name();
    Base * derived2 = Base::derived2("derived2");
    std::cout << derived1->name();
    derived1->some_abstract_method();
    derived2->some_abstract_method();
    delete derived1;
    delete derived2;
    return 0;
}