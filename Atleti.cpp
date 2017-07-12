/*
 * Atleti.cpp
 *
 *  Created on: 2.05.2017 ã.
 *      Author: user
 */

#include "Atleti.h"



Atleti::~Atleti() {
	// TODO Auto-generated destructor stub
}

const string& Atleti::getFirstName() const {
	return firstName;
}

void Atleti::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Atleti::getLastName() const {
	return lastName;
}

void Atleti::setLastName(const string& lastName) {
	this->lastName = lastName;
}

const string& Atleti::getNacionality() const {
	return nacionality;
}

void Atleti::setNacionality(const string& nacionality) {
	this->nacionality = nacionality;
}

float Atleti::getRecord() const {
	return record;
}

Atleti::Atleti(string firstName, string lastName, float record,
		string nacionality) {
	setFirstName(firstName);
	setLastName(lastName);
	setRecord(record);
	setNacionality(nacionality);
}

void Atleti::print() {
	cout<<getFirstName()<< "  "<< getLastName()<< "  " << getRecord()<< " " << getNacionality()<<endl;
}

void Atleti::setRecord(float record) {
	this->record = record;
}
