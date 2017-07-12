/*
 * Employee.cpp
 *
 *  Created on: 6.04.2017 ã.
 *      Author: user
 */

#include "Employee.h"

Employee::Employee() {
	// TODO Auto-generated constructor stub

}

const string& Employee::getFirstName() const {
	return firstName;
}

void Employee::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

double Employee::getSalary() const {
	return salary;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}

const string& Employee::getSecondName() const {
	return secondName;
}

Employee::Employee(string firstName, string lastName, double salary) {
	this->firstName=firstName;
	this->secondName=secondName;
	this->salary=salary;
}

void Employee::setSecondName(const string& secondName) {
	this->secondName = secondName;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

double Employee::yearSalary()
{
	return salary * 12 ;
}

void Employee::raiseSalary() {
	setSalary(getSalary() * 0.1 + getSalary());
}
