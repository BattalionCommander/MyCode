#include "stdafx.h"
#include <iostream>
using namespace std;
#define Less(x,y) { \
	if (x<y) \
	{ \
		cout<<"��Сֵ"<<x<<endl; \
	} \
	else if (y<x) \
	{ \
		cout<<"��Сֵ"<<y<<endl; \
	} \
	else{ \
		cout << "�������" << endl; \
	} \
}

int main() {
	Less(2, 4);
	Less(3, 1);
	system("PAUSE");
}