/*
 * Course.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#include "Course.h"

Course::Course() {

     setName(" ");
     setNumber(0);
     setProduljitelnost(0);
     setPrice(0.0);
}

Course::~Course() {
	// TODO Auto-generated destructor stub
}

const string& Course::getName() const {
	return name;
}

void Course::setName(const string& name) {
	this->name = name;
}

int Course::getNumber() const {
	return number;
}

void Course::setNumber(int number) {
	this->number = number;
}

float Course::getPrice() const {
	return price;
}

void Course::setPrice(float price) {
	this->price = price;
}

int Course::getProduljitelnost() const {
	return produljitelnost;
}

Course::Course(string name, int number, int produljitelnost, float price) {
	setName(name);
	setNumber(number);
	setProduljitelnost(produljitelnost);
	setPrice(price);
}

void Course::printInfo() {
	cout<<getName()<< " " << getNumber() << " " <<
	getProduljitelnost()<<" "<< getPrice() << " " << endl;
}

void Course::setProduljitelnost(int produljitelnost) {
	this->produljitelnost = produljitelnost;
}
