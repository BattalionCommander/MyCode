// ��ļ̳�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
public:
	A(int x) {
		cout << "����A" << x << endl;
	}
};

class B {
public:
	B(int a) {
		cout << "����B" << a << endl;
	}
};

class C :private B
{
public:
	C(int x) :m_b(x++), B(x++) {
		cout << "����C" << x << endl;
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

 