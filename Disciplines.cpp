/*
 * Disciplines.cpp
 *
 *  Created on: 2.05.2017 ã.
 *      Author: user
 */

#include "Disciplines.h"



Disciplines::~Disciplines() {
	// TODO Auto-generated destructor stub
}

const string& Disciplines::getName() const {
	return name;
}

void Disciplines::setName(const string& name) {
	this->name = name;
}

float Disciplines::getRecordSustezanie() const {
	return recordSustezanie;
}

void Disciplines::setRecordSustezanie(float recordSustezanie) {
	this->recordSustezanie = recordSustezanie;
}

float Disciplines::getWorldRecord() const {
	return worldRecord;
}

Disciplines::Disciplines(string name, float worldRecord, float recordSustezanie) {
	setName(name);
	setWorldRecord(worldRecord);
	setRecordSustezanie(recordSustezanie);
}

void Disciplines::print() {
	cout<<getName()<< " " << getWorldRecord()<<  " " << getRecordSustezanie()<<endl;
}

void Disciplines::setWorldRecord(float worldRecord) {
	this->worldRecord = worldRecord;
}
