/*
 * nqmamdumi.cpp
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#include "nqmamdumi.h"    /// manager.cpp



nqmamdumi::~nqmamdumi() {
	// TODO Auto-generated destructor stub
}

const string& nqmamdumi::getDeparment() const {
	return deparment;
}

void nqmamdumi::setDeparment(const string& deparment) {
	this->deparment = deparment;
}

const string& nqmamdumi::getFirstName() const {
	return firstName;
}

void nqmamdumi::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

int nqmamdumi::getHour() const {
	return hour;
}

void nqmamdumi::setHour(int hour) {
	this->hour = hour;
}

const string& nqmamdumi::getLastName() const {
	return lastName;
}

void nqmamdumi::setLastName(const string& lastName) {
	this->lastName = lastName;
}

int nqmamdumi::getSalaryPerhour() const {
	return salaryPerhour;
}

void nqmamdumi::setSalaryPerhour(int salaryPerhour) {
	this->salaryPerhour = salaryPerhour;
}

int nqmamdumi::getYearOfexp() const {
	return yearOfexp;
}

nqmamdumi::nqmamdumi(string firstName, string lastName, string deparment,  // purvo dopisvame
		int salaryPerhour, int hour, int YearOfexp)  /// imenata ot H.
{   setFirstName(firstName); //
    setLastName(lastName);     //
    setDeparment(deparment);      ///
    setSalaryPerhour(salaryPerhour); // 2ro setove
    setHour(hour); //
    setYearOfexp(YearOfexp);  ///


}

void nqmamdumi::setYearOfexp(int yearOfexp) {
	this->yearOfexp = yearOfexp;
}
