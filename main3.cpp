#include <iostream>
#include "delegates_callbacks_functors.h"
#define PY_SSIZE_T_CLEAN
#include </usr/include/python3.9/pyconfig-64.h>
#include <Python.h>

typedef int (*f)(int, int);

int main() {

	A objA;
	B objB;


	f pfoo = A::fooAStatic;
	auto pfoo2 = [&](int a, int b)->int {return objA.fooAMember(a, b); };

	std::cout << objB.passMeACallback(pfoo);  // works, because method is static
	//std::cout << objB.passMeACallback(pfoo2); // doesn't work

	std::cout << objB.passAnotherCallback(pfoo2);
	std::cout << objB.passAnotherCallback(pfoo);

	getchar();
	return 0;
}