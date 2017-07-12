/*
 * Adres.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Adres.h"



Adres::~Adres() {
	// TODO Auto-generated destructor stub
}

const string& Adres::getGrad() const {
	return grad;
}

void Adres::setGrad(const string& grad) {
	this->grad = grad;
}

int Adres::getNomer() const {
	return nomer;
}

void Adres::setNomer(int nomer) {
	this->nomer = nomer;
}

const string& Adres::getUlica() const {
	return ulica;
}

Adres::Adres(string grad, string ulica, int nomer) {
	setGrad(grad);
	setUlica(ulica);
	setNomer(nomer);
}

void Adres::setUlica(const string& ulica) {
	this->ulica = ulica;
}

void Adres::print() {
	cout<< getGrad()<< " "<< getUlica()<< "  " << getNomer()<< "  " << endl;
}
