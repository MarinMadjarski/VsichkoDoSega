/*
 * BankaDSK.cpp
 *
 *  Created on: 5.04.2017 ã.
 *      Author: user
 */
#include<iostream>
#include "BankaDSK.h"
using namespace std;
BankaDSK::BankaDSK() {
	// TODO Auto-generated constructor stub
balance=0;
}

int BankaDSK::getBalance() const {
	return balance;
}

void BankaDSK::setBalance(int balance) {
	this->balance = balance;
}

BankaDSK::~BankaDSK() {
	// TODO Auto-generated destructor stub
}

BankaDSK::BankaDSK(int balance) {
	if(balance >= 0){
		this->balance=balance;
	}
	if(balance < 0){
		cout << "error" << endl;
		this->balance=0;
	}
}

void BankaDSK::credit(int money) {
	balance=balance + money;
}

void BankaDSK::debit(int money) {
	if(balance < money){
		cout<<"Error"<<endl;
	}
	else {
		balance=balance - money;
	}

}
