/*
 * Employeee.cpp
 *
 *  Created on: 19.04.2017 ã.
 *      Author: user
 */

#include "Employeee.h"



Employeee::Employeee(string name, int salary, date& birthDate, date& hireDay)
: birthDate(birthDate), hireDate(hireDate)
{
	setName(name);   //
	setSalary(salary); //                    Posle tova

}

const date& Employeee::getBirtDdate() const {
	return birthDate;
}

void Employeee::setBirtDdate(const date& birtDdate) {
	this->birthDate = birtDdate;
}

const date& Employeee::getHireDate() const {
	return hireDate;
}

void Employeee::setHireDate(const date& hireDate) {
	this->hireDate = hireDate;
}

const string& Employeee::getName() const {
	return name;
}

void Employeee::setName(const string& name) {
	this->name = name;
}

int Employeee::getSalary() const {
	return salary;
}

void Employeee::print() {
	cout<<5;
}



void Employeee::setSalary(int salary) {
	this->salary = salary;
}


Employeee::~Employeee() {
	// TODO Auto-generated destructor stub
}

