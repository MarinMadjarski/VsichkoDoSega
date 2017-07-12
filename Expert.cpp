/*
 * Expert.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Expert.h"

Expert::Expert() {
	setBonus(0);

}

Expert::Expert(int bonus,  string firstName,
		string lastName, string department, int salaryPerHour, int Hours)
: Employee(firstName,lastName,department,salaryPerHour,Hours) {
	setBonus(bonus);
}

Expert::~Expert() {
	// TODO Auto-generated destructor stub
}

int Expert::getBonus() const {
	return bonus;
}

void Expert::setBonus(int bonus) {
	this->bonus = bonus;
}
int Expert::calculateSalary() {
return Employee ::calculateSalary() + bonus;
}

void Expert::print() {
	cout<<getBonus()<< endl;
	Employee::print();
}
