/*
 * SeniorExpert.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "SeniorExpert.h"

SeniorExpert::SeniorExpert() {
	// TODO Auto-generated constructor stub

}

SeniorExpert::~SeniorExpert() {
	// TODO Auto-generated destructor stub
}

const string& SeniorExpert::getTehnologies() const {
	return tehnologies;
}

void SeniorExpert::print() {
}

void SeniorExpert::setTehnologies(const string& tehnologies) {
	this->tehnologies = tehnologies;
}
