#pragma once
#include <iostream>
using namespace std;

class A {
public:
	A(int x) {
		cout << "构造A" << x << endl;
	}
};

class B {
public:
	B(int a) {
		cout << "构造B" << a << endl;
	}
};

class C :private B
{
public:
	C(int x) :m_b(x++), B(x++) {
		cout << "构造C" << x << endl;
	}
private:
	A m_b;
};

//C d(1);