// 14重载操作符和自定义转换.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <assert.h>
using namespace std;

class String {
	//重载输出操作符
	friend ostream & operator<<(ostream &out, String & str);
	//重载关系操作符
	friend bool operator==(const String &left, const String &right);
	friend bool operator!=(const String &left, const String &right);
	friend bool operator<(const String &left, const String &right);
public:
	//定义构造函数
	String();//定义无参数构造函数
	String(const char * str);//定义构造函数
	String(const String & str);//定义复制构造函数
	//重载赋值操作符
	String &operator=(const String & str);//重载赋值操作符,字符串类
	String &operator=(const char *str);//重载赋值操作符，常量字符串
	String &operator=(char c);//重载赋值操作符，字符

	//重载[]操作符
	char & operator[](int index);//重载下标操作符

	//重载转换操作符
	operator char*();
	~String();

private:
	char * m_data;
};

String::String(){
	m_data = new char[1];
	m_data[0] = '\0';
}

String::String(const char * str) {//构造函数
	int len = strlen(str);
	m_data = new char[len + 1];//申请数组
	strcpy(m_data, str);//复制数据
}

String::String(const String & str) {//复制构造函数
	int len = strlen(str.m_data);
	m_data = new char[len + 1];//申请数组
	strcpy(m_data, str.m_data);//复制数据
}

String & String::operator=(const String & str) {
	if (&str == this) return *this;//防止有a=a这样的复制，把数据删除
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
	m_data = new char[2];//字符串中只有一个字符，长度为2
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
	assert(index >= 0 && index < strlen(m_data));//确保下标有效
	return m_data[index];
}

String::operator char*() {
	return m_data;
}

String::operator char*() {//析构函数
	delete m_data;//释放申请的内存
}

ostream & operator<<(ostream & out, String & str) {//重载输出
	out<<str.m_data;
	return out;
}
int main()
{
	cout << "赋值操作符的使用" << endl;
	String s1("Hellow");//用字符串初始化
	String s2;//无初始化参数
	s2 = s1;//用类对象赋值
	cout << s2 << endl;
	s2 = "Hellw World";
	cout << s2 << endl;//用常量字符串赋值
	s2 = 'a';//用字符赋值
	cout << s2 << endl;

	cout << "小标识符的使用" << endl;
	s2 = "Hello World";
	cout << "变化之前为：" <<s2<< endl;
	s2[1] = 'E';
	cout << "变化之后：" << s2 << endl;
	cout << "操作符转换：" << endl;
	char buffer[128];
	strcpy(buffer, s2);
	cout << "buffer=" << buffer << endl;
	return 0;
}

