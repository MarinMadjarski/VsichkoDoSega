/*
 * Expert.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */
#include <string>
#include <iostream>
#include "Employee.h"
#ifndef EXPERT_H_
#define EXPERT_
using namespace std;
class Expert : public Employee {
public:
	Expert(int bonus,string firstName,string lastName,string department,
			int salaryPerHour,int Hours);
	Expert();
	virtual ~Expert();
	int getBonus() const;
	void setBonus(int bonus);
int calculateSalary();
	void print();

private:
	int bonus;
};

#endif /* EXPERT_H_ */
