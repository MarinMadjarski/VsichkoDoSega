/*
 * Product.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#include "Product.h"

Product::Product() : manafacturer() {
	setProductName(" ");
	setTip(" ");
	setCounter(0);
    setPrice(0.0);
}

Product::~Product() {
	// TODO Auto-generated destructor stub
}

int Product::getCounter() const {
	return counter;
}

void Product::setCounter(int counter) {
	this->counter = counter;
}

const Manafacturer& Product::getManafacturer() const {
	return manafacturer;
}

void Product::setManafacturer(const Manafacturer& manafacturer) {
	this->manafacturer = manafacturer;
}

double Product::getPrice() const {
	return price;
}

void Product::setPrice(double price) {
	this->price = price;
}

const string& Product::getProductName() const {
	return productName;
}

void Product::setProductName(const string& productName) {
	this->productName = productName;
}

const string& Product::getTip() const {
	return tip;
}

Product::Product(string productName, string tip, double price, int counter,
		Manafacturer manafacturer) : manafacturer (manafacturer) {
	setProductName(productName);
	setTip(tip);
	setPrice(price);
	setCounter(counter);
}

void Product::print() {
	cout << getProductName() << " " << getTip() << " " <<  getPrice() << " " << getCounter() << endl;
		manafacturer.printInfo();
}

void Product::setTip(const string& tip) {
	this->tip = tip;
}
