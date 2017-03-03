// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int ary[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = ary;
	int *q=p+sizeof(ary)/sizeof(ary[0])-1;
	cout << *q << endl;
	while (p<q)
	{
		int t;
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << ary[i] << endl;
	}
	
	system("PAUSE");
    return 0;
}

