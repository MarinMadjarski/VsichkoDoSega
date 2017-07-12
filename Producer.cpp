#include "Producer.h"
#include <iostream>
using std::cout;
Producer::Producer() {
	// TODO Auto-generated constructor stub
	this->name = "name";
	this->code = 1;
	this->country = "country";
}

Producer::Producer(const string& name, int code, const string& country){
	setName(name);
	setCode(code);
	setCountry(country);
}

int Producer::getCode() const {
	return code;
}

void Producer::setCode(int code) {
	this->code = code;
}

const string& Producer::getCountry() const {
	return country;
}

void Producer::setCountry(const string& country) {
	this->country = country;
}

const string& Producer::getName() const {
	return name;
}

void Producer::setName(const string& name) {
	this->name = name;
}

void Producer::print() const {
	cout << "Producer: " << this->getName() << ", " << this->getCode() <<
			", " << this->getCountry() << "\n";
}
Producer::~Producer() {
	// TODO Auto-generated destructor stub
}

