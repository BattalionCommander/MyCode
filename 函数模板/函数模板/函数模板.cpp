// ����ģ��.cpp : �������̨Ӧ�ó������ڵ㡣
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



	//����ó�17
	srand((unsigned)time(NULL));
	//srand()��������һ���Ե�ǰʱ�俪ʼ���������.Ӧ�÷���for��ѭ�����ǰ�� ��ȻҪ�ܳ�ʱ��ȴ�
	__int16 card;
	card=rand() % 6;//MAXΪ���ֵ���������Ϊ0~MAX-1
	for (size_t i = 0; i <1;i++ )
	{
		
		cout << rand() % 6 << rand() % 15 <<  rand() % 6 << rand() % 15 << endl;
		

		
	}

	system("PAUSE");
    return 0;
}

