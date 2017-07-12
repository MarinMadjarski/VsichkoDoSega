/*
 * Shef.cpp
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#include "Shef.h"
#include "Rabotnik.h"


Shef::~Shef() {
	// TODO Auto-generated destructor stub
}

int Shef::getBonus() const {
	return bonus;
}

Shef::Shef(string firstName,string lastName,int year, int salary, int bonus) : Rabotnik(firstName,lastName , year,salary){

	setBonus(bonus);
}

void Shef::earnBonus() {
	bonus= getSalary() + bonus ;
	cout<<getBonus()<< endl;
}

void Shef::setBonus(int bonus) {
	this->bonus = bonus;
}

void Shef::print() {
	Rabotnik ::print();
	cout<<getBonus()<<endl;

}
