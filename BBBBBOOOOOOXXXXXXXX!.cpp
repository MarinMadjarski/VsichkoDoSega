//============================================================================
// Name        : BBBBBOOOOOOXXXXXXXX!.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Books.h"
#include <iostream>
using namespace std;


int main() {
	Books b1;
	Books b2;
	Books b3;
	cin >> b1 >> b2;
	cout << b1 << " " << b2;
	b3 = b2 + b1;
	cout << b3;

	cout <<(b1 > b2)<< endl;
	return 0;
}
