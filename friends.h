#include <iostream>
using namespace std;

class Private {
    static const int sdata = 5;
    int data;
    void foo() {cout << "hoho!" << endl;}

    friend class Friend;

    public:
        Private(){data = 10;}
};

class Friend {
    int data;
    Private p_obj;
    public:
        Friend(){
            data = p_obj.data;
        }

        int increm(){
            p_obj.foo();
            return data + Private::sdata;
        }
};