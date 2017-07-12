//============================================================================
// Name        : klasove1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "BankaDSK.h"
int main() {


	BankaDSK Pesho(600);
	cout<<Pesho.getBalance()<<endl;
	Pesho.credit(700);
	cout<<Pesho.getBalance()<<endl;
	Pesho.debit(1200);
		cout<<Pesho.getBalance()<<endl;
	return 0;
}
