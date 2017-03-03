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
	cout << m_name << "����!" << endl;
}

void person::Eat() {
	cout << m_name << "�Է��ˣ�" << endl;
}

void person::Work() {
	cout << m_name << "�����ˣ�" << endl;
}

void person::Sleep() {
	cout << m_name << "˯���ˣ�" << endl;
}

