struct GrannyVC{
    virtual void f() const;
};

struct MomVC: GrannyVC {
private:
    void f() const override; // since C++ 11
};

struct SonVC: MomVC{
    void f() const final;
};
void virtual_complicated_2_main();