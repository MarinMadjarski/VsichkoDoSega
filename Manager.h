/*
 * Manager.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */
#include <string>
#include <iostream>
#include "Employee.h"
#ifndef MANAGER_H_
#define MANAGER_H_
using namespace std;
class Manager :public Employee{
public:
	Manager();
	Manager(int yearsOfExperience,string firstName,string lastName,string department,int salaryPerHour,int Hours);
	virtual ~Manager();
	void print();
	int getYearsOfExperience() const;
	void setYearsOfExperience(int yearsOfExperience);

private:
 int	yearsOfExperience;
};

#endif /* MANAGER_H_ */
