/*
 * Osigurovki.cpp
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#include "Osigurovki.h"




Osigurovki::~Osigurovki() {
	// TODO Auto-generated destructor stub
}

int Osigurovki::getOsigurovki() const {
	return osigurovki;
}

void Osigurovki::print() {
	Rabotnik ::print();
	cout<<getOsigurovki()<<endl;
}

void Osigurovki::earnBonus() {
}

void Osigurovki::Osigurovki(string firstName,string lastName,int year,int salary,int bonus,int Osigurovki): Rabotnik(firstName,lastName,year,salary,bonus) {
	setOsigurovki(Osigurovki);
	Osigurovki= (salary + bonus) * 0.10 ;
}

void Osigurovki::setOsigurovki(int osigurovki) {
	this->osigurovki = osigurovki;
}
