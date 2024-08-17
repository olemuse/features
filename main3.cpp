#include <iostream>
#include "delegates_callbacks_functors.h"
#include <functional>
//#define PY_SSIZE_T_CLEAN
//#include <Python.h>

typedef int (*f)(int, int);

int main() {

	A objA;
	B objB;


	f pfoo = A::fooAStatic;
	auto pfoo2 = [&](int a, int b)->int {return objA.fooAMember(a, b); };
	//auto pfoo3 = std::bind(&A::fooAMember, objA, std::placeholders::_1, std::placeholders::_2);

	std::cout << objB.passMeACallback(pfoo);  // works, because method is static


	std::cout << objB.passAnotherCallback(std::bind(&A::fooAMember, objA, std::placeholders::_1, std::placeholders::_2)); 

	std::cout << objB.passAnotherCallback(pfoo2);
	std::cout << objB.passAnotherCallback(pfoo);

	getchar();
	return 0;
}
/*
class LibraryClass {
public:
  void passACallbackToMe(std::function<int(int, int)> callback) {
      // Now invoke (call) the callback
    int o = callback(1, 2);
        printf("Value: %i\n", o); // We might be on an embedded system, use printf() and not std::cout
  }
};

class MyClass {
public:
      int methodToCallback(int num1, int num2) {
          return num1 + num2;
      }
};

int main()
{
    MyClass myClass;
	A a;

    LibraryClass libraryClass;
	B b;

    // Alternate way to using a lambda, use std::bind instead. However I recommend the lambda way.
	b.passAnotherCallback(std::bind(&A::fooAMember, a, std::placeholders::_1, std::placeholders::_2));
    libraryClass.passACallbackToMe(std::bind(&MyClass::methodToCallback, myClass, std::placeholders::_1, std::placeholders::_2));
}*/