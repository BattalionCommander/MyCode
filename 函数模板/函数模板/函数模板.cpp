// 函数模板.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

template <typename T ,int size>
int find(T (&ary)[size], T var) {
	for (size_t i = 0; i < size; i++)
	{
		if (var == ary[i]) {
			return i;
		}
	}
	return -1;
}
int main()
{
	//int ai[6] = {1,2,3,4,5,6};
	//double bi[6] = { 1.2,2.3,3.3,4,5,6 };
	//cout << find(ai, 3);
	//cout << find(bi, 3.3);



	//随机拿出17
	srand((unsigned)time(NULL));
	//srand()函数产生一个以当前时间开始的随机种子.应该放在for等循环语句前面 不然要很长时间等待
	__int16 card;
	card=rand() % 6;//MAX为最大值其随机域为0~MAX-1
	for (size_t i = 0; i <1;i++ )
	{
		
		cout << rand() % 6 << rand() % 15 <<  rand() % 6 << rand() % 15 << endl;
		

		
	}

	system("PAUSE");
    return 0;
}

