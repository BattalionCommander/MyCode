// 内联函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
inline int add(int a, int b);

int main()
{
	int c = add(1, 2);
	cout << c << endl;
	system("PAUSE");
    return 0;
}

int add(int a, int b) {
	return a + b;
}