#include "passing_strings.h"
#include "templates.h"
#include "using_in_classes.h"
#include "template_concept.h"
#include "friends.h"
#include "init_list.h"
#include "lambdas.h"


int main(){

/*  strings  
    string str = "Hello!";

    passConstPntString(&str);
    passConstRefString(str);
    passConstString(str);
    passPntString(&str);
    passRefString(str);
    passString(str);
*/

/* // simple teplates

    cout << compare(4, 2) << endl;

    MyClass<int, float> obj(2, 23.44);
    MyClass<char, int> obj2('e', 4);
    cout << obj2.get_line() << endl;
    cout << obj.get_bigger() << endl;

    MyNewClass<int> obj_int(5);
    MyNewClass<char> obj_char('d');

    cout << obj_int.greater(7) << endl;
    cout << obj_char.upper() << endl;

    MyIntTemplate<int, 5> obj_tint;
    obj_tint.setMember(4, 0);
    cout << obj_tint.getMember(0) << endl;

    MyIntTempl2<> obj_tint2;
    obj_tint2.data[0] = 5;
    cout << obj_tint2.data[0] << endl;
*/
    
/*  // using for child classes (getting to protected)

    Base b;
    ChildA cha;
    ChildB chb;
    ChildC chc;
    ChildAA chaa;

    chaa.print_public();
    chaa.print_protected();


    b.print_public();
    
    cha.print_public();
    cha.print_protected();

    chb.print_public();
    chb.print_protected();

    chc.print_public();
    chc.print_protected();

*/

/*  // concepts + using  
    T5 t5;
    cout << t5.add(4) << endl;

    FF f;
    f.data[0] = true;
    f.data[1] = false;
    f.data[2] = false;
    f.data[3] = true;

    for (auto i : f.data)
        cout << i << endl;
*/

/*// friends

Friend f;
cout << f.increm() << endl;
*/
    
    C cobj(300);

    LambdaClass lclass(10);

    cout << lclass.compare(5, &bigger) << endl;
    cout << lclass.compare_2(5, &smaller) << endl;
    cout << lclass. compare_3(10, [](int val1, int val2) -> bool {
        return val1 == val2;
    }) << endl;
    auto f = [](int v1, int v2) {return v1 == v2;};
    cout << lclass.compare(22, f) << endl;
    
    return 0;
}