/*
 * ClassOffice.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#include "ClassOffice.h"

ClassOffice::ClassOffice() : Course() {
	setTip(" ");
	setAdres(" ");
	setZala(" ") ;

}

ClassOffice::~ClassOffice() {
	// TODO Auto-generated destructor stub
}

const string& ClassOffice::getAdres() const {
	return adres;
}

void ClassOffice::setAdres(const string& adres) {
	this->adres = adres;
}

const string& ClassOffice::getTip() const {
	return tip;
}

void ClassOffice::setTip(const string& tip) {
	this->tip = tip;
}

const string& ClassOffice::getZala() const {
	return zala;
}

ClassOffice::ClassOffice(string name, int number, int produljitelnost,
		float price, string tip, string adres, string zala) : Course(name, number,
				produljitelnost,price){
	setTip(tip);
	setAdres(adres);
	setZala(zala);
}

void ClassOffice::print() {
	Course::printInfo();
	cout<<getTip()<< " " << getAdres()<<" "<<getZala()<<endl;
}

void ClassOffice::setZala(const string& zala) {
	this->zala = zala;
}

double ClassOffice::calculate() {
	getProduljitelnost() + getTip();
}
