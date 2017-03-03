// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace  std;


#include "EnemyManager.h"


int main()
{



	//ZiFuChuan();
	//ShowPoint();
	//CallFunctions();
	//CallFunTem();
	//CallHong();

	E_M_Instance->CreateEnemys();
	E_M_Instance->ShowEnmeysId();
	E_M_Instance->ShowEnemysName();


	return 0;
}

