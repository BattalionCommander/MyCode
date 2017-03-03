#pragma once
#include <iostream>
#include <string>
using namespace std;

class person {
public:
	person(char * name);
	void GetUp();
	void Eat();
	void Work();
	void Sleep();
private:
	string m_name;
};

person::person(char * name) :m_name(name) {

}

void person::GetUp() {
	cout << m_name << "起床了!" << endl;
}

void person::Eat() {
	cout << m_name << "吃饭了！" << endl;
}

void person::Work() {
	cout << m_name << "工作了！" << endl;
}

void person::Sleep() {
	cout << m_name << "睡觉了！" << endl;
}

