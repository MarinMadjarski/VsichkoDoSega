/*
 * BankaDSK.h
 *
 *  Created on: 5.04.2017 ã.
 *      Author: user
 */

#ifndef BANKADSK_H_
#define BANKADSK_H_
#include<string>
using namespace std;

class BankaDSK {
private:
int balance;

public:

	BankaDSK();
	virtual ~BankaDSK();
	int getBalance() const;
	void setBalance(int balance);
	BankaDSK(int balance);
	void credit(int money);
	void debit(int money);
};

#endif /* BANKADSK_H_ */
