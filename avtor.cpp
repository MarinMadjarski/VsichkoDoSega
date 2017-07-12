/*
 * avtor.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */
#include <iostream>
#include "avtor.h"
using namespace std;

avtor::avtor() {
	setFirstName("");
	setLastName("");
	setRate(0);

}

avtor::~avtor() {
	// TODO Auto-generated destructor stub
}

const string& avtor::getFirstName() const {
	return firstName;
}

void avtor::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& avtor::getLastName() const {
	return lastName;
}

void avtor::setLastName(const string& lastName) {
	this->lastName = lastName;
}

int avtor::getRate() const {
	return rate;
}

avtor::avtor(string firstName, string lastName, int rate) {
	setFirstName(firstName);
	setLastName(lastName);
	setRate(rate);
}

void avtor::print() {
	cout<< getFirstName() << " " << getLastName() << " " << getRate() << endl;
}

void avtor::setRate(int rate) {
	this->rate = rate;
}
