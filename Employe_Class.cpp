//============================================================================
// Name        : Employe_Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Employee.h"
#include <iostream>
using namespace std;

int main() {

	Employee class1("Marin " , "Madjarski " , 1200);
	cout << "Get salary" << class1.getSalary() << endl;
    class1.raiseSalary();
    cout << "get salary" << class1.getSalary()<< endl;

	return 0;
}
