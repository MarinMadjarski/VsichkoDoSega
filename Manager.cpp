/*
 * Manager.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Manager.h"



Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

int Manager::getYearsOfExperience() const {
	return yearsOfExperience;
}


void Manager::print() {
	Employee::print();
	cout<< getYearsOfExperience()<<  endl;
}

Manager::Manager() {
	setYearsOfExperience(0);
}

Manager::Manager(int yearsOfExperience, string firstName, string lastName,
		string department, int salaryPerHour, int Hours)
: Employee(firstName,lastName,department,salaryPerHour,Hours){
	setYearsOfExperience(yearsOfExperience);
}

void Manager::setYearsOfExperience(int yearsOfExperience) {
	this->yearsOfExperience = yearsOfExperience;
}
