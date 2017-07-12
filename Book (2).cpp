/*
 * Book.cpp
 *
 *  Created on: 23.05.2017 ã.
 *      Author: user
 */

#include "Book.h"

Book::Book() :janr() {
	// TODO Auto-generated constructor stub
  setName(" ");
  setAuthor(" ");

  setPrice(0);
}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

const string& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const string& author) {
	this->author = author;
}

Janr Book::getJanr() const {
	return janr;
}

void Book::setJanr(Janr janr) {
	this->janr = janr;
}

const string& Book::getName() const {
	return name;
}

void Book::setName(const string& name) {
	this->name = name;
}

double Book::getPrice() const {
	return price;
}

Book::Book(string name, string author, Janr janr, double price) : janr(janr) {
	setName(name);
	setAuthor(author);
	setPrice(price);
}

void Book::setPrice(double price) {
	this->price = price;
}
