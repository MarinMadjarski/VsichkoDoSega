/*
 * Rabotnik.cpp
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */
using namespace std;
#include "Rabotnik.h"
#include <string>
#include <iostream>

Rabotnik::~Rabotnik() {
	// TODO Auto-generated destructor stub
}

const string& Rabotnik::getFirstName() const {
	return firstName;
}

void Rabotnik::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Rabotnik::getLastName() const {
	return lastName;
}

void Rabotnik::setLastName(const string& lastName) {
	this->lastName = lastName;
}

int Rabotnik::getSalary() const {
	return salary;
}

void Rabotnik::setSalary(int salary) {
	this->salary = salary;
}

int Rabotnik::getYear() const {
	return year;
}

Rabotnik::Rabotnik(string firstName, string lastName, int year, int salary) {
	setFirstName(firstName);
	setLastName(lastName);
	setYear(year);
	setSalary(salary);
}

void Rabotnik::setYear(int year) {
	this->year = year;
}

void Rabotnik::print() {
	cout<<getFirstName()<<"   " <<getLastName()<< "  " << getYear() << "   " <<getSalary()<< endl;
}
