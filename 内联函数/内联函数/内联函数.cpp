// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
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