/*
 * ClassOnline.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#include "ClassOnline.h"

ClassOnline::ClassOnline() : Course() {
   setLevel(" ");
   setKind(" ");
   setHour(0);
}

ClassOnline::~ClassOnline() {
	// TODO Auto-generated destructor stub
}

int ClassOnline::getHour() const {
	return hour;
}

void ClassOnline::setHour(int hour) {
	this->hour = hour;
}

const string& ClassOnline::getKind() const {
	return kind;
}

void ClassOnline::setKind(const string& kind) {
	this->kind = kind;
}

const string& ClassOnline::getLevel() const {
	return level;
}

ClassOnline::ClassOnline(string name, int number, int produljitelnost,
		float price, string level, string kind, int hour) : Course(name,
				number,produljitelnost,price){
	setLevel(level);
	setKind(kind);
	setHour(hour);
}

void ClassOnline::print() {
	Course::printInfo();
	cout<<getLevel()<<" " << getKind() << " "<< getHour()<<endl;

}

double ClassOnline::calculate() {
	return getLevel() + getPrice();
}

void ClassOnline::setLevel(const string& level) {
	this->level = level;
}
