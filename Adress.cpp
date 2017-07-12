/*
 * Adress.cpp
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */

#include "Adress.h"
#include "OvernightPackage.h"			// includewame za da syzdadadem obekt ot OvernightPackage



Adress::~Adress() {
	// TODO Auto-generated destructor stub
}

const string& Adress::getGrad() const {
	return grad;
}

void Adress::setGrad(const string& grad) {
	this->grad = grad;
}

int Adress::getNomer() const {
	return nomer;
}

void Adress::setNomer(int nomer) {
	this->nomer = nomer;
}

const string& Adress::getUlica() const {
	return ulica;
}

Adress::Adress(string grad, string ulica, int nomer) {		// konstruktor koito syzdawa GRAD, ULICA, NOMER
	setGrad(grad);											// zadawame ime na GRAD
	setUlica(ulica);										// zadawame ime na ULICA
	setNomer(nomer);										// zadawame stoinost na NOMER
}

void Adress::print() {

	cout<< getGrad()<< " "<< getUlica()<< "  " << getNomer()<< "  " << endl;		// izpiswame imenata i stoinostite
}

void Adress::setUlica(const string& ulica) {
	this->ulica = ulica;
}

void funkciqOver(){
	OvernightPackage obekt;		// Syzdawane na obekt ot OvernightPackage
	obekt.funkciq();			// izpylnqwame funkciq ot obekt, koito e obekt ot OvernightPackage.
}

