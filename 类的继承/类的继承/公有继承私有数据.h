#pragma once
#include <iostream>
using namespace std;
class Base {
public:
	int m_a;
	void f1() {
		f2();
	};
private:
	int m_b;
	void f2() {
		cout << "1" << endl;
	};
protected:
	int m_c;
	void f3();
};
class Derived :public Base {
public:
	void f4() {
		m_a;
		f1();
		m_c;
		f3();
	}
};