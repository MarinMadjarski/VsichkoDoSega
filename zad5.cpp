//============================================================================
// Name        : zad5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Adress.h"
#include "Client.h"

using namespace std;

int main() {

	Adress test("Plovdiv", "Nqkoq", 1); // syzdawame obekt ot Adress s ime test i mu zadawame stoinosti
	Adress test1("Sofiq", "Sofiq", 2);	// syzdawame obekt ot Adress s ime test1 i mu zadawame stoinosti

//	Client test2("Ivan");

//	test.funkciqOver();
	test.print();		// izpylnqwame funkciq print ot klas Adress s parametri ot test
	test1.print();		// izpylnqwame funkciq print ot klas Adress s parametri ot test1
//	test2.print();


}
