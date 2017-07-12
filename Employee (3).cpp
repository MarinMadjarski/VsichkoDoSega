/*
 * Employee.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Employee.h"

Employee::Employee() {
	setFirstName("");
	setLastName("");
	setDepartment("");
	setSalaryPerHour(0);
	setHours(0);

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

const string& Employee::getDepartment() const {
	return department;
}

void Employee::setDepartment(const string& department) {
	this->department = department;
}

const string& Employee::getFirstName() const {
	return firstName;
}

void Employee::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

int Employee::getHours() const {
	return hours;
}

void Employee::setHours(int hours) {
	this->hours = hours;
}

const string& Employee::getLastName() const {
	return lastName;
}

void Employee::setLastName(const string& lastName) {
	this->lastName = lastName;
}

int Employee::getSalaryPerHour() const {
	return salaryPerHour;
}

Employee::Employee(string firstName, string lastName, string department,
		int salaryPerHour, int hours) {
setFirstName(firstName);
setLastName(lastName);
setDepartment(department);
setSalaryPerHour(salaryPerHour);
setHours(hours);
}

void Employee::setSalaryPerHour(int salaryPerHour) {
	this->salaryPerHour = salaryPerHour;
}

void Employee::print() {
	cout<< getFirstName()<<"   "<< getLastName()<<"   "<<getDepartment()<< "   "<< getSalaryPerHour()<<
			"   "<< getHours()<< "   " << endl;
}

int Employee::calculateSalary() {
	return getSalaryPerHour() * getHours();
}
