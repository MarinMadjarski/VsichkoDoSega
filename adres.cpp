/*
 * adres.cpp
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#include "adres.h"

adres::adres(string grad, string ulica, int nomer) {
	setGrad(grad);
	setUlica(ulica);
	setNomer(nomer);


}

adres::~adres() {
	// TODO Auto-generated destructor stub
}

const string& adres::getGrad() const {
	return grad;
}

void adres::setGrad(const string& grad) {
	this->grad = grad;
}

int adres::getNomer() const {
	return nomer;
}

void adres::setNomer(int nomer) {
	this->nomer = nomer;
}

const string& adres::getUlica() const {
	return ulica;
}

void adres::setUlica(const string& ulica) {
	this->ulica = ulica;
}

void adres::print() {
	cout<<getGrad()<<"  "<<getUlica()<<"  "<<getNomer()<<" "<<endl;
}
