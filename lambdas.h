#include <iostream>
#include <functional>

class LambdaClass{
    public: int data;

    public:
        LambdaClass(int val) : data(val){}
        LambdaClass() : data(0){}

        bool compare(int val, auto cmp(int,int)->bool){
            return cmp(data, val);
        }

        bool compare_2(int val, bool (*cmp) (int, int)){
            return cmp(data, val);
        }

        bool compare_3(int val, std::function<bool(int, int)> cmp){
            return cmp(data, val);
        }
};

bool bigger(int a, int b){
    return a > b;
}

bool smaller(int a, int b){
    return a < b;
}


