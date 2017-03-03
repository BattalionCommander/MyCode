// 内存对齐.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
public:
	int a1;
	int a2;
};
class B:public A {
public:
	char a1;
	int a2;
};

int main()
{
	A stra;
	cout << sizeof(stra) << endl;
	B strb;
	cout << sizeof(strb) << endl;
	system("PAUSE");
    return 0;
}

