struct BaseVC{
    virtual void f() const;
};

struct DerivedVC: BaseVC {
    void f() const override; // since C++ 11
};

void virtual_complicated_1_main();