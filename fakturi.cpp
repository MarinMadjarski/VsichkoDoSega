/*
 * fakturi.cpp
 *
 *  Created on: 5.04.2017 ã.
 *      Author: user
 */

#include "fakturi.h"

fakturi::fakturi() {
	// TODO Auto-generated constructor stub

}

const string& fakturi::getPart() const {
	return part;
}

void fakturi::setPart(const string& part) {
	this->part = part;
}

const string& fakturi::getPartDescription() const {
	return partDescription;
}

void fakturi::setPartDescription(const string& partDescription) {
	this->partDescription = partDescription;
}

float fakturi::getPrice() const {
	return price;
}

void fakturi::setPrice(float price) {
	this->price = price;
}

int fakturi::getQuantity() const {
	return quantity;
}

fakturi::fakturi(string part, string partDescription, int quantity, float price) {
this->part=part;
this->partDescription=partDescription;
this->quantity=quantity;
this->price=price;
}

void fakturi::setQuantity(int quantity) {
	this->quantity = quantity;
}

fakturi::~fakturi() {
	// TODO Auto-generated destructor stub
}

float fakturi::getInvoiceAmount()
{
	return price * quantity;
}
