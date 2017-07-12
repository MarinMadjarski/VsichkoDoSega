//============================================================================
// Name        : employee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Employeee.h"

#include <iostream>
using namespace std;

int main() {
date hDate(10,3,2007);
date bDate(11,11,2000);

Employeee empl1("Marin " , 3300, hDate, bDate);
empl1.print();
	return 0;
}
