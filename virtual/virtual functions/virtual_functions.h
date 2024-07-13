// Polymorphism and virtual functions
// Idea of virtual functions

struct BaseV{
    virtual void f();
    // Virtual destructor
    virtual ~BaseV() = default;
};

struct DerivedV: BaseV {
    int * p = new int(1);
    void f();
    virtual ~DerivedV();
};

void virtual_functions_main();