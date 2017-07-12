/*
 * Client.cpp
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */

#include "Client.h"

Client::Client(string name, Adress nomer1) {
	setName(name);
	SetAdress(nomer1);
}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

void SetAdrees(Adress nomer1){
	nomer1.setGrad("");
	nomer1.setUlica("");
	nomer1.setNomer(1);
}

const string& Client::getName() const {
	return name;
}

void Client::setName(const string& name) {
	this->name = name;
}

void Client::print() {
	cout<< getName()<< " "<< nomer1.getGrad() << nomer1.getUlica() << nomer1.getNomer() << "  "<< endl;
}


