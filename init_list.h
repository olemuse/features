#include <iostream>

class A{
    int i;
    const int ii;
    public:
        A(int v):ii(v){
            i = v;
        }
};

class B : A{
    int j;
    int& k;
    public:
        B(int v, int& vv) : A(v), k(vv){
            j = v;
        }
};

class C {
    char ch;
    public:
    C(char v) : ch(v){}
};

class D {
    char ch;
    public:
    D(char v) : ch{v}{}
};

