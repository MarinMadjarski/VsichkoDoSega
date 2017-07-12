/*
 * Manafacturer.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#include "Manafacturer.h"

Manafacturer::Manafacturer() {
	setName(" ");
	setCode(" ");
	setCountry(" ");

}

Manafacturer::~Manafacturer() {
	// TODO Auto-generated destructor stub
}

const string& Manafacturer::getCode() const {
	return code;
}

void Manafacturer::setCode(const string& code) {
	this->code = code;
}

const string& Manafacturer::getCountry() const {
	return country;
}

void Manafacturer::setCountry(const string& country) {
	this->country = country;
}

const string& Manafacturer::getName() const {
	return name;
}

Manafacturer::Manafacturer(string name, string code, string country) {
	setName(name);
	setCode(code);
	setCountry(country);
}

void Manafacturer::printInfo() {cout <<"The manafacture is :"<< getName()<< " "
	<< getCode()<< " " << getCountry() << endl;

}

void Manafacturer::setName(const string& name) {
	this->name = name;
}
