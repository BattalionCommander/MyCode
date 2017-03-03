#pragma once

#include <iostream>
#include <String>
#include "KaPian.h"
using namespace std;
/*
1.传入卡牌
2.发牌
3.排序输出
*/
class Dealer :public KaPian {
public:
	void Begin(); //发牌员进行发牌
	
private:
	int Cards[6][15] = { 0 };
	int Player1[6][15] = { 0 };
	int Player2[6][15] = { 0 };
	int Player3[6][15] = { 0 };
	void Deal();//发牌行为

public:

	Dealer();//传入总的卡牌
	~Dealer();
};