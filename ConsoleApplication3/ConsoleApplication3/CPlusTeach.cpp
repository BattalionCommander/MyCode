// CPlusTeach.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

#include "WeiYunsuan.h"
#include "ZhiZhen.h"
#include "Functions.h"
#include "FunctionTemplate.h"
#include "TeachHong.h"

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

