/*
 * Package.cpp
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */

#include "Package.h"



Package::~Package() {
	// TODO Auto-generated destructor stub
}

int Package::getCost() const {
	return cost;
}

void Package::setCost(int cost) {
	this->cost = cost;
}

float Package::getWeight() const {
	return weight;
}

Package::Package(float weight, int cost) {
	setWeight(weight);
	setCost(cost);
}

void Package::print() {

}

void Package::setWeight(float weight) {
	this->weight = weight;
}
