// CPlusTeach.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

#include "WalkEnemy.h"


int main()
{
	// Enemy		{IdCount,testId}
	// WalkEnemy	{IdCount,testId,testId}

	//		new		��	testId��testId
	//				ջ	testId��testId
	// ��̬�����ڴ�		IdCount

	//WalkEnemy walkEnemy;
	Enemy * enemy = new WalkEnemy();
	//delete enemy;

	cout << "enemy size:" << sizeof(Enemy) << endl;
	cout << "walk enemy size:" << sizeof(WalkEnemy) << endl;

	enemy->GetIdCount();

	WalkEnemy * walkEnemy = (WalkEnemy *)enemy;
	walkEnemy->GetIdCount();

	enemy->ChangeIdCount();
	walkEnemy->GetIdCount();


	// �� �ĸ���
	/*{
	int x = 10;
	{
	int x = 20;
	cout << "x = "<<x << endl;
	}
	cout << "x = " << x << endl;
	}*/
	system("PAUSE");
	return 0;

}

