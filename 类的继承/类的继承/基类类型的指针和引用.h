#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;

class Employee {
};

class Manager :public Employee
{
public:
	void getTop()
	{
		cout << "Manager Top" << endl;
	};

};

class Engineer:public Employee
{
public:
	void getProject()
	{
		cout << "Engineer Project" << endl;
	};

};

class Salesman :public Employee {
public:
	void getCount() {
		cout << "Salesman Count" << endl;
	}
};

//cout << "基类类型的指针" << endl;
//manager a;
//engineer b;
//salesman c;
//employee * pobj[3] = { &a,&b,&c };
//
//manager *pa = static_cast<manager*>(pobj[0]);
//pa->gettop();
//
//engineer *pb = static_cast<engineer*>(pobj[0]);
//pb->getproject();
//
//salesman *pc = static_cast<salesman*>(pobj[0]);
//pc->getcount();
