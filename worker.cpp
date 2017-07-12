/*
 * worker.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "worker.h"
#include <iostream>
using namespace std;

worker::worker() {
	// TODO Auto-generated constructor stub
setName("");
setEgn("");
setAddress("");
}

worker::~worker() {
	// TODO Auto-generated destructor stub
}

const string& worker::getAddress() const {
	return address;
}

void worker::setAddress(const string& address) {
	this->address = address;
}

const string& worker::getEgn() const {
	return egn;
}

void worker::setEgn(const string& egn) {
	this->egn = egn;
}

const string& worker::getName() const {
	return name;
}

worker::worker(string name, string egn, string address) {
	setName(name);
	setEgn(egn);
	setAddress(address);
}

double worker::calculate() {

}

void worker::print() {
	cout << getName() << " " << getEgn() << " " << getAddress()<<endl;
}

void worker::setName(const string& name) {
	this->name = name;
}
