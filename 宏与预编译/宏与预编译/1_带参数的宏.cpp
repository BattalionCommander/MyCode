#include "stdafx.h"
#include <iostream>
using namespace std;
#define Less(x,y) { \
	if (x<y) \
	{ \
		cout<<"较小值"<<x<<endl; \
	} \
	else if (y<x) \
	{ \
		cout<<"较小值"<<y<<endl; \
	} \
	else{ \
		cout << "两数相等" << endl; \
	} \
}

int main() {
	Less(2, 4);
	Less(3, 1);
	system("PAUSE");
}