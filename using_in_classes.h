#include <iostream>
using namespace std;

class Base {
    private:
        void print_private(){cout << "Base::print_private()" << endl;}
    protected:
        void print_protected(){cout << "Base::print_protected()" << endl;}
    public:
        void print_public(){cout << "Base::print_public()" << endl;}
};

class ChildA : public Base {
    public:
        using Base::print_protected;
        //void print_protected(){cout << "ChildA::print_protected()" << endl;}

        using Base::print_public;
        void print_public(){cout << "ChildA::print_public()" << endl;}       
};

class ChildAA : public ChildA {

};

class ChildB : public Base {
    public:
        void print_protected(){cout << "ChildB::print_protected()" << endl;}

        void print_public(){cout << "ChildB::print_public()" << endl;}       
};

class ChildC : public Base {
    public:
        using Base::print_protected;
        void print_protected() {cout << "ChildC::print_protected()" << endl;}

        //void print_public() {cout << "ChildC::print_public()" << endl;}       
};
