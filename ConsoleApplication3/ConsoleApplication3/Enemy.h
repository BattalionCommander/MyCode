#pragma once

#include <String>
#include <iostream>

using namespace std;



enum EnemyActionType
{
	Walk = 1,
	Jump,
	Fly
};

class Enemy
{
private:
	
	__int32		__Id;
	string		__Name;
	__int16		__Health;
	EnemyActionType __MyType;
protected:
	EnemyActionType	GetType();
public:
	Enemy();
	Enemy(EnemyActionType Type, string Name, __int16 Health);
	Enemy(const Enemy & enemy);
	~Enemy();

	__int32		GetId();
	void		SetName(string Name);
	string		GetName();
	void		SetHealth(__int16);
	__int16		GetHealth();

};

