//============================================================================
// Name        : carsystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	car car1("BMW", 14.8, "red");
float lit	= car1.calculateLiters(400);
cout << lit;
	return 0;
}
