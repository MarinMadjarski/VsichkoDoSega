/*
 * date.cpp
 *
 *  Created on: 19.04.2017 ã.
 *      Author: user
 */

#include "date.h"
#include <iostream>
using namespace std;


date::date(int day, int month, int year)    /// purvo tova (promenqme skobite i vkarvame nashite danni )
{
	setDay(day);       ///
	setMonth(month);   /// posle v skobite pishtem tova
	setYear(year);    ///
}

void date::print() const {
	cout << getDay() << "  " << getMonth() << "  " << getYear()<< endl;  /// 2ro includvame iostream i namespace sled tova pishem tova,koeto trqbva da izvedem .
}

int date::getDay() const {
	return day;
}

void date::setDay(int day) {
	this->day = day;
}

int date::getMonth() const {
	return month;
}

void date::setMonth(int month) {
	this->month = month;
}

int date::getYear() const {
	return year;

}

void date::setYear(int year) {
	this->year = year;
}

date::~date() {
	// TODO Auto-generated destructor stub
}
