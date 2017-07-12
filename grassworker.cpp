/*
 * grassworker.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "grassworker.h"
#include <iostream>
using namespace std;

grassworker::grassworker() : worker(){
	// TODO Auto-generated constructor stub
setArea(0);
setStavka(0);
}

grassworker::grassworker(string name, string egn, string address, int area,
		int stavka):worker(name,egn,address) {
	setArea(area);
	setStavka(stavka);
}

grassworker::~grassworker() {
	// TODO Auto-generated destructor stub
}

void grassworker::print() {
	worker::print();
	cout<<getArea() << " " << getStavka();
}

double grassworker::calculate() {
	return getArea() * getStavka();
}

int grassworker::getArea() const {
	return area;
}

void grassworker::setArea(int area) {
	this->area = area;
}

int grassworker::getStavka() const {
	return stavka;
}

void grassworker::setStavka(int stavka) {
	this->stavka = stavka;
}
