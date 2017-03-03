#include "stdafx.h"
#include "EnemyManager.h"
#include "Enemy.h"

EnemyManager::EnemyManager()
{
	//EnemyList;
}
EnemyManager::~EnemyManager()
{
	for (int i = 0; i < 4; ++i)
	{
		delete EnemyList[i];
	}
}
EnemyManager * EnemyManager::GetInstance()
{
	static EnemyManager  enemyManager;
	return &enemyManager;
}
void EnemyManager::CreateEnemys()
{
	for (int i = 0; i < 3; ++i)
	{
		EnemyList[i] = new Enemy();
	}
	EnemyList[3] = new Enemy(Fly, "King", 200);
	
	Enemy enmy = *(EnemyList[3]);
	SpecialEnemy = &enmy;
}
void EnemyManager::ShowEnmeysId()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << "Show Enemy Id : " << EnemyList[i]->GetId() << endl;
	}
	cout << "Show Enemy Id : " << SpecialEnemy->GetId() << endl;
}
void EnemyManager::ShowEnemysName()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << "Show Enemy Name : " << EnemyList[i]->GetName().c_str() << endl;
	}
	cout << "Show Enemy Name : " << SpecialEnemy->GetName().c_str() << endl;
}
