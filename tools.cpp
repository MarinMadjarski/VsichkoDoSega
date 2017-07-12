/*
 * tools.cpp
 *
 *  Created on: 16.05.2017 ã.
 *      Author: user
 */

#include "tools.h"

tools::tools() {
	// TODO Auto-generated constructor stub

}

tools::~tools() {
	// TODO Auto-generated destructor stub
}

int tools::getDataOfTools() const {
	return dataOfTools;
}

void tools::setDataOfTools(int dataOfTools) {
	this->dataOfTools = dataOfTools;
}

const string& tools::getNameOfTools() const {
	return nameOfTools;
}

void tools::setNameOfTools(const string& nameOfTools) {
	this->nameOfTools = nameOfTools;

}

int tools::getNumberOfTools() const {
	return numberOfTools;
}

void tools::setNumberOfTools(int numberOfTools) {
	this->numberOfTools = numberOfTools;
}

double tools::getPrice() const {
	return price;
}

tools::tools(int dataOfTools, string nameOfTools, int numberOfTools, double price) {
	setDataOfTools(dataOfTools);
	setNameOfTools(nameOfTools);
	setNumberOfTools(numberOfTools);
	setPrice(price);
}

void tools::setPrice(double price) {
	this->price = price;
}
