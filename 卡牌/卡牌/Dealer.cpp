#include "stdafx.h"
#include "Dealer.h"
#include <time.h> 
using namespace std;
Dealer::Dealer()
	:KaPian() 
{
	//将所有卡导入
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t n = 0; n < 15; n++)
		{
			Cards[i][n] = K_Data[i][n];

		}

	}
}

Dealer::~Dealer()
{

}
void Dealer::Begin() {


	//发牌行为
	Deal();
	


	//输出Player1
	cout << "Player1" << endl << endl;;
	for (size_t i = 0; i < 15; i++)
	{
		int m = 0;
		for (size_t n = 0; n < 6; n++)
		{
			if (Player1[n][i])
			{
				K_Type Random1 = static_cast<K_Type>(n);
				K_Value Random2 = static_cast<K_Value>(i);
				SetType(Random1);
				SetValue(Random2);
				cout << GetName() <<"	";
				m = 1;
			}
		}
		if (m == 1)
		{
			cout << endl;
		}
		
	}


	//输出Player2
	cout << endl<< "Player2" << endl << endl;;
	for (size_t i = 0; i < 15; i++)
	{
		int m = 0;
		for (size_t n = 0; n < 6; n++)
		{
			if (Player2[n][i])
			{
				K_Type Random1 = static_cast<K_Type>(n);
				K_Value Random2 = static_cast<K_Value>(i);
				SetType(Random1);
				SetValue(Random2);
				cout << GetName() << "	";
				m = 1;
			}
		}
		if (m == 1)
		{
			cout << endl;
		}

	}


	//输出Player3
	cout <<endl<< "Player3" << endl << endl;;
	for (size_t i = 0; i < 15; i++)
	{
		int m = 0;
		for (size_t n = 0; n < 6; n++)
		{
			if (Player3[n][i])
			{
				K_Type Random1 = static_cast<K_Type>(n);
				K_Value Random2 = static_cast<K_Value>(i);
				SetType(Random1);
				SetValue(Random2);
				cout << GetName() << "	";
				m = 1;
			}
		}
		if (m == 1)
		{
			cout << endl;
		}

	}

}


//发牌行为
void Dealer::Deal()
{
	//随机拿出17
	srand((unsigned)time(NULL));
	//srand()函数产生一个以当前时间开始的随机种子.应该放在for等循环语句前面 不然要很长时间等待
	int Random1 = 0;
	int Random2 = 0;
	int Papers = 0;
	int Random3 = rand() % 3;

		//给Player1发牌
		for (size_t i = 1; i > 0; i++)
		{
			Random1 = rand() % 6;
			Random2 = rand() % 15;
			
			if (Cards[Random1][Random2])
			{
				Player1[Random1][Random2] = Cards[Random1][Random2];
				
				Cards[Random1][Random2] = 0;
				Papers++;
			}
			if (Papers==17)
			{
				Papers = 0;
				break;
			}
		}
	
		
		//给Player2发牌
		for (size_t i = 1; i > 0; i++)
		{
			Random1 = rand() % 6;
			Random2 = rand() % 15;

			if (Cards[Random1][Random2]>0)
			{
				Player2[Random1][Random2] = Cards[Random1][Random2];
				Cards[Random1][Random2] = 0;
				Papers++;
			}
			if (Papers==17)
			{
				Papers = 0;
				break;
			}
		}
		

		//给Player3发牌
		for (size_t i = 1; i > 0; i++)
		{
			Random1 = rand() % 6;
			Random2 = rand() % 15;
			if (Cards[Random1][Random2])
			{
				Player3[Random1][Random2] = Cards[Random1][Random2];
				Cards[Random1][Random2] = 0;
				Papers++;
			}
			if (Papers==17)
			{
				Papers = 0;
				break;
			}
		}
		

		//将剩下的卡片全部遍历，地主多拿三张
		for (size_t i = 0; i < 6; i++)
		{
			for (size_t n = 0; n < 15;n++)
			{
				if (Cards[i][n])
				{
					switch (Random3)
					{
					case 0:
						Player1[i][n] =  Cards[i][n];
						break;
					case 1:
						Player2[i][n] = Cards[i][n];
						break;
					case 2:
						Player3[i][n] = Cards[i][n];
						break;
					
					}
				}
			}
		}
		switch (Random3)
		{
		case 0:
			cout << "Player1是地主！" << endl;
			break;
		case 1:
			cout << "Player2是地主！" << endl;
			break;
		case 2:
			cout << "Player3是地主！" << endl;
			break;
		
		}
}

