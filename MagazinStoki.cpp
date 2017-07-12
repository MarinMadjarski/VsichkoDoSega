//============================================================================
// Name        : MagazinStoki.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "fakturi.h"
#include <iostream>
using namespace std;

int main() {

	fakturi Magazin("5678" , "gaika" , 23, 12);

	cout<<Magazin.getInvoiceAmount();

	return 0;
}
