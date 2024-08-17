#pragma once
#include <functional>

class A {
public:
	static int fooAStatic(int a, int b) {
		return a + b;
	}
	int fooAMember(int a, int b) {
		return a + b;
	}
};

class B {
public:
	int passMeACallback(int(*f)(int a, int b)) {
		return f(1, 2);
	}

	int passAnotherCallback(std::function<int(int, int)> callback) {
		return callback(1, 2);
	}
};


