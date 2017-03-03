// 14���ز��������Զ���ת��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <assert.h>
using namespace std;

class String {
	//�������������
	friend ostream & operator<<(ostream &out, String & str);
	//���ع�ϵ������
	friend bool operator==(const String &left, const String &right);
	friend bool operator!=(const String &left, const String &right);
	friend bool operator<(const String &left, const String &right);
public:
	//���幹�캯��
	String();//�����޲������캯��
	String(const char * str);//���幹�캯��
	String(const String & str);//���帴�ƹ��캯��
	//���ظ�ֵ������
	String &operator=(const String & str);//���ظ�ֵ������,�ַ�����
	String &operator=(const char *str);//���ظ�ֵ�������������ַ���
	String &operator=(char c);//���ظ�ֵ���������ַ�

	//����[]������
	char & operator[](int index);//�����±������

	//����ת��������
	operator char*();
	~String();

private:
	char * m_data;
};

String::String(){
	m_data = new char[1];
	m_data[0] = '\0';
}

String::String(const char * str) {//���캯��
	int len = strlen(str);
	m_data = new char[len + 1];//��������
	strcpy(m_data, str);//��������
}

String::String(const String & str) {//���ƹ��캯��
	int len = strlen(str.m_data);
	m_data = new char[len + 1];//��������
	strcpy(m_data, str.m_data);//��������
}

String & String::operator=(const String & str) {
	if (&str == this) return *this;//��ֹ��a=a�����ĸ��ƣ�������ɾ��
	delete m_data;
	int len = strlen(str.m_data);
	m_data = new char[len + 1];
	strcpy(m_data, str);
	return *this;
}

String & String::operator=(const char *str) {
	delete m_data;
	int len = strlen(str);
	m_data = new char[len + 1];
	strcpy(m_data, str);
	return *this;
}

String & String::opreator = (char c) {
	deleta m_data;
	m_data = new char[2];//�ַ�����ֻ��һ���ַ�������Ϊ2
	m_Data[0] = c;
	m_data = '\0';
	return *this;
}

bool operator==(const String &left, const String &right) {
	return strcmp(left.m_data, right.m_data)==0;
}

bool operator==(const String &left, const String &right) {
	return !(left == right);
}

bool operator<(const String &left, const String &right) {
	return strcmp(left.m_data, right.m_data) < 0;
}

char & String::operator[](int index) {
	assert(index >= 0 && index < strlen(m_data));//ȷ���±���Ч
	return m_data[index];
}

String::operator char*() {
	return m_data;
}

String::operator char*() {//��������
	delete m_data;//�ͷ�������ڴ�
}

ostream & operator<<(ostream & out, String & str) {//�������
	out<<str.m_data;
	return out;
}
int main()
{
	cout << "��ֵ��������ʹ��" << endl;
	String s1("Hellow");//���ַ�����ʼ��
	String s2;//�޳�ʼ������
	s2 = s1;//�������ֵ
	cout << s2 << endl;
	s2 = "Hellw World";
	cout << s2 << endl;//�ó����ַ�����ֵ
	s2 = 'a';//���ַ���ֵ
	cout << s2 << endl;

	cout << "С��ʶ����ʹ��" << endl;
	s2 = "Hello World";
	cout << "�仯֮ǰΪ��" <<s2<< endl;
	s2[1] = 'E';
	cout << "�仯֮��" << s2 << endl;
	cout << "������ת����" << endl;
	char buffer[128];
	strcpy(buffer, s2);
	cout << "buffer=" << buffer << endl;
	return 0;
}

