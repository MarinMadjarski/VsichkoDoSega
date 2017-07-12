/*
 * poluchatel.cpp
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#include "poluchatel.h"

poluchatel::poluchatel(string name , adres& sAdres) : sAdres(sAdres){
	setName(name);

}

poluchatel::~poluchatel() {
	// TODO Auto-generated destructor stub
}

const string& poluchatel::getName() const {
	return name;
}

void poluchatel::setName(const string& name) {
	this->name = name;
}

const adres& poluchatel::getAdres() const {
	return sAdres;
}

void poluchatel::setAdres(const adres& adres) {
	sAdres = adres;
}
