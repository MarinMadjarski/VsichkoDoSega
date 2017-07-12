/*
 * Savingacc.cpp
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#include "Savingacc.h"

float Savingacc :: rate=0 ;

Savingacc::Savingacc(float balance) {
setBalance(balance);

}

void Savingacc::modiflyInterestRate(float rate) {
	this->rate=rate;
}

void Savingacc::modiflyAnnualRate(float rate) {
	Savingacc :: AnnualRate = rate;
}

void Savingacc::calculateMonthlyInterest() {
balance += balance* (AnnualRate /12)
}

void Savingacc::setBalance(float balance) {
	this->balance = balance;
}


Savingacc::~Savingacc() {
	// TODO Auto-generated destructor stub
}

