/*
 * car.cpp
 *
 *  Created on: 5.04.2017 ã.
 *      Author: user
 */

#include "car.h"



car::car() {
	// TODO Auto-generated constructor stub

}

car::~car() {
	// TODO Auto-generated destructor stub
}



const string& car::getColor() const {
	return color;
}

void car::setColor(const string& color) {
	this->color = color;
}

float car::getFuelConsumption() const {
	return fuelConsumption;
}

void car::setFuelConsumption(float fuelConsumption) {
	this->fuelConsumption = fuelConsumption;
}

const string& car::getModel() const {
	return model;
}

car::car(string model, float fuelConsumption, string color) {
	this->model=model;
	this->fuelConsumption=fuelConsumption;
	this->color=color;
}

void car::setModel(const string& model) {
	this->model = model;
}

float car::calculateLiters(int distance) {
return	(distance * this->fuelConsumption)/100;
}
