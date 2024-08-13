#include <concepts>

template<class T, T::type n = 0>
class X {
    public:
        T data;
        X(){data.data = n;}
        T::type add(T::type val){
            return data.add(val);
        }   
};
 
struct S
{
    using type = int;
    type data;
    type add(type val){
        return data+val;
    }
};

struct Ch
{
    using type = char;
    type data;
    type add(type val){
        return data+val;
    }
};
 
using T5 = X<S, 5>;
using T6 = X<Ch>;     

template <class Z>
concept C1 = sizeof(Z) != sizeof(int);

template <C1 B, int N = 2>
class F{
    public:
        B data[N];
};

using FF = F<bool, 4>;






