/*
 * Employee.h
 *
 *  Created on: 6.04.2017 ã.
 *      Author: user
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

class Employee {
private:
string firstName;
string secondName;
double salary;
public:

	Employee();
	Employee(string firstName, string lastName, double salary);
	virtual ~Employee();
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	double getSalary() const;
	void setSalary(double salary);
	const string& getSecondName() const;
	void setSecondName(const string& secondName);
	double yearSalary();
	void raiseSalary();
};

#endif /* EMPLOYEE_H_ */
