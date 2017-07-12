/*
 * Product.cpp
 *
 *  Created on: 31.05.2017 ã.
 *      Author: user
 */

#include "Product.h"

Product::Product() {
	setType  ( " " );
	setModel ( " " );
	setBrand  (" " );
	setSoldQuantity (0);
	setPrice ( 0.0 );

}

Product::~Product() {
	// TODO Auto-generated destructor stub
}

const string& Product::getBrand() const {
	return brand;
}

void Product::setBrand(const string& brand) {
	this->brand = brand;
}

const string& Product::getModel() const {
	return model;
}

void Product::setModel(const string& model) {
	this->model = model;
}

float Product::getPrice() const {
	return price;
}

void Product::setPrice(float price) {
	this->price = price;
}

int Product::getSoldQuantity() const {
	return soldQuantity;
}

void Product::setSoldQuantity(int soldQuantity) {
	this->soldQuantity = soldQuantity;
}

const string& Product::getType() const {
	return type;
}

Product::Product(string type, string model, string brand, int soldQuantity,
		float price) {
	setType(type);
	setModel(model);
	setBrand(brand);
	setSoldQuantity(soldQuantity);
	setPrice(price);
}

void Product::printInfo() {
	cout<< getType() << " " << getModel() << " " << getBrand() <<
	" " << getSoldQuantity() << " " << getPrice() << endl;
}

void Product::setType(const string& type) {
	this->type = type;
}
bool operator<(const Product& l, const Product& r)
{
	float profitL, profitR;
	profitL = l.getPrice() * l.getSoldQuantity();
	profitR = r.getPrice() * r.getSoldQuantity();

	return (profitL < profitR);

}
ostream& operator << (ostream& os , const Product& obj)
{
	os << obj.getType() << " " << obj.getModel() << " " << obj.getBrand() <<
			" " << obj.getSoldQuantity() << " " << obj.getPrice()<< endl;
	return os;
}



















