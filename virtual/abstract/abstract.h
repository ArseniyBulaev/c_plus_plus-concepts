// Abstract clases and pure virtual functions

struct ShapeA /* Abstract class */ {
    virtual double area() const = 0; // Pure virtual
    virtual ~ShapeA() = default;
};

struct Square: ShapeA {
    double a;
    Square(double a) : a(a) {};
    double area() const override;
};

void abstract_test();