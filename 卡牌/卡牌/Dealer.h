#pragma once

#include <iostream>
#include <String>
#include "KaPian.h"
using namespace std;
/*
1.���뿨��
2.����
3.�������
*/
class Dealer :public KaPian {
public:
	void Begin(); //����Ա���з���
	
private:
	int Cards[6][15] = { 0 };
	int Player1[6][15] = { 0 };
	int Player2[6][15] = { 0 };
	int Player3[6][15] = { 0 };
	void Deal();//������Ϊ

public:

	Dealer();//�����ܵĿ���
	~Dealer();
};