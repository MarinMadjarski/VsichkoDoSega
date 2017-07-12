/*
 * brokerr.cpp
 *
 *  Created on: 7.04.2017 ã.
 *      Author: user
 */

#include "brokerr.h"

brokerr::brokerr() {
	// TODO Auto-generated constructor stub

}

int brokerr::getDeals() const {
	return deals;
}

void brokerr::setDeals(int deals) {
	this->deals = deals;
}

const string& brokerr::getFirstName() const {
	return firstName;
}

void brokerr::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& brokerr::getSecondName() const {
	return secondName;
}

void brokerr::setSecondName(const string& secondName) {
	this->secondName = secondName;
}

float brokerr::getSum() const {
	return sum;
}

void brokerr::setSum(float sum) {
	this->sum = sum;
}

int brokerr::getViews() const {
	return views;
}

brokerr::brokerr(string firstName, string secondName, int views, int deals,
		float sum) {
	this->firstName=firstName;
	this->secondName=secondName;
	this->views=views;
	this->deals=deals;
	this->sum=sum;
}

void brokerr::setViews(int views) {
	this->views = views;
}

brokerr::~brokerr() {
	// TODO Auto-generated destructor stub
}

