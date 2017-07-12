/*
 * book.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "book.h"

book::book() :aavtor(){

	setName("");
	setJanr("");
    setIsbn(isbn);

}

book::~book() {
	// TODO Auto-generated destructor stub
}

const avtor& book::getAavtor() const {
	return aavtor;
}

void book::setAavtor(const avtor& aavtor) {
	this->aavtor = aavtor;
}

int book::getIsbn() const {
	return isbn;
}

void book::setIsbn(int isbn) {
	this->isbn = isbn;
}

const string& book::getJanr() const {
	return janr;
}

void book::setJanr(const string& janr) {
	this->janr = janr;
}

const string& book::getName() const {
	return name;
}

book::book(string name, string janr, avtor aavtor, int isbn) : avtor(aavtor){
	setName(name);
	setJanr(janr);

	setIsbn(isbn);
}

void book::print() {
	cout<< getName() << " " << getJanr() << " " << getAavtor() << " " << getIsbn() << endl;
}

void book::setName(const string& name) {
	this->name = name;
}
