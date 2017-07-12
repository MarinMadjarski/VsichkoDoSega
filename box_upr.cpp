//============================================================================
// Name        : box_upr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Box.h"
#include <iostream>
using namespace std;

int main() {
	Box b1;
	Box b2;
	Box b3;
	cin >> b1 >> b2;
	cout << b1 << " " << b2;
	b3 = b2 + b1;
	cout << b3;







	return 0;
}
