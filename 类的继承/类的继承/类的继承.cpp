// 类的继承.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
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
C d(1);


int main()
{
	int str[5][5] = { 0 };
	cout << str[1][2] << endl;
	if (str[1][2])
	{
		cout << "sdadsadsa" << endl;
	}
	system("PAUSE");
    return 0;
}

 