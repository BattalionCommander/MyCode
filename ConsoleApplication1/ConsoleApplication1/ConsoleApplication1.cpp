// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int n = 7;
	int a[20] = { 0 }, b[20] = { 0 };
	int * last = a;
	int * current = b;
	for (size_t i = 0; i < n; i++)
	{
		current[0] = 1;
		current[i] = 1;

		for (size_t j = 1; j < i; j++)
		{
			current[j] = last[j] + last[j - 1];
		}
		for (size_t j = 0; j < n-i-1; j++)
		{
			cout << "  ";
		}
		for (size_t j = 0; j <=i; j++)
		{
			cout << current[j] << "   ";
		}
		cout << endl;
		int * temp = current;
		current = last;
		last = temp;
	}
	for (size_t i = 0; i < 20; i++)
	{
		cout << current[i];
	}
	for (size_t i = 0; i < 20; i++)
	{
		cout << last[i];
	}
	system("PAUSE");
    return 0;
}

