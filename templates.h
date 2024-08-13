#include <iostream>
#include <string>

using namespace std;

template <class T>
T compare(T a, T b){
    T r;
    r = (a > b) ? a : b;
    return r;
}

template <class U, class Z>
class MyClass {
    private:
        U data;
        Z more_data;
    public:
        MyClass(U value1, Z value2) : data(value1), more_data(value2) {
        }

        U get_bigger();
};

template<class U, class Z>
U MyClass<U, Z>::get_bigger(){
    U res;
    res = data > more_data? data : (U)more_data;
    return res;
}

template<class A>
class MyNewClass{
    private:
        A data;
    public:
        MyNewClass(A value): data(value){}
        A greater(A v){
            return data>v?data:v;
        }
};

template<>
class MyNewClass <char>{
    private:
        char data;
    public:
        MyNewClass(char value): data(value){}
        char upper(){
            if(data > 'Z' && data <= 'z')
                return data - ('a' - 'A');
            else
                return data;
        }
};

template<class Z> class MyClass<char, Z>{
    private:
        char data;
        Z more_data;
    public:
        MyClass(char value1, Z value2) : data(value1), more_data(value2) {
        }

        string get_line();    
};

template<class Z> string MyClass<char, Z>::get_line(){
    string res = "";
    res.push_back(data);
    res.push_back(more_data + 48);
    return res;
}

template <class B, int N>
class MyIntTemplate{
    private:
        B data[N];
    public:
        void setMember(B val, int pos);
        B getMember(int pos){
            B res;
            if(pos < N)
                res = data[pos];
            return res;
        }
};

template <class B, int N> 
void MyIntTemplate<B, N>::setMember(B val, int pos){
    if (pos < N)
        data[pos] = val;
}

template<class C = int, int J = 10>
struct MyIntTempl2 {
    public:
        C data[J];
};


