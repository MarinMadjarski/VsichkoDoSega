//============================================================================
// Name        : SavingsAccount.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Savingacc.h"

int main() {
	Savingacc::modiflyAnnualRate(3);
	Savingacc *saver1 = new Savingacc(1000);
	Savingacc *saver2 = new Savingacc(30000);

	saver1->calculateMonthlyInterest();
	saver2->calculateMonthlyInterest();

	saver1->calculateMonthlyInterest();
	saver2->calculateMonthlyInterest();

	Savingacc::AnnualRate(2);

	saver1->calculateMonthlyInterest();
	saver2->calculateMonthlyInterest();

	return 0;
}
