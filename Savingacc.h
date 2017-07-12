/*
 * Savingacc.h
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#ifndef SAVINGACC_H_
#define SAVINGACC_H_

class Savingacc {
private:
	static float rate;
	double balance;
public:
	Savingacc(float);
	virtual ~Savingacc();
	static void modiflyInterestRate(float);
	void calculateMonthlyInterest();
	void setBalance(float balance);
    void modiflyAnnualRate(float rate);
    void calculateMonthlyInterest();
};

#endif /* SAVINGACC_H_ */
