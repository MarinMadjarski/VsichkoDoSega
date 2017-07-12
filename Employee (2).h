/*
 * Employee.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */
#include <string>
#include <iostream>
#include "Adres.h"

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
using namespace std;

class Employee  {
public:
	Employee();
	Employee(string,string,string,int,int);
	virtual ~Employee();
	const string& getDepartment() const;
	void setDepartment(const string& department);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	int getHours() const;
	void setHours(int hours);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getSalaryPerHour() const;
	void setSalaryPerHour(int salaryPerHour);
    void print();
    int calculateSalary();
private:
	string firstName;
	string lastName;
	string department;
	int salaryPerHour;
	int hours;

};

#endif /* EMPLOYEE_H_ */
