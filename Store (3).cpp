/*
 * Store.cpp
 *
 *  Created on: 29.05.2017 ã.
 *      Author: user
 */

#include "Store.h"

Store::Store() {
	// TODO Auto-generated constructor stub

}

Store::~Store() {
	// TODO Auto-generated destructor stub
}

const string& Store::getBrand() const {
	return brand;
}

void Store::setBrand(const string& brand) {
	this->brand = brand;
}

const string& Store::getModel() const {
	return model;
}

void Store::setModel(const string& model) {
	this->model = model;
}

const string& Store::getName() const {
	return name;
}

void Store::setName(const string& name) {
	this->name = name;
}

float Store::getPrice() const {
	return price;
}

void Store::setPrice(float price) {
	this->price = price;
}

int Store::getQuantity() const {
	return quantity;
}

Store::Store(string name, string brand, string model, int quantity,
		float price) {
	setName(name);
	setBrand(brand);
	setModel(model);
	setQuantity(quantity);
	setPrice(price);
}

void Store::setQuantity(int quantity) {
	this->quantity = quantity;
}

void Store::oborotMagazin() {
	cout << getPrice() * getQuantity() << endl;

}

void Store::oborotVsichkiMagazini() {
	cout << getPrice() * getQuantity() << endl;
}

void Store::magazinMinOborot() {
}

void Store::magazinMaxOborot() {
}

void Store::maxOborotArtikuli() {
}

void Store::maxProdajbaArtikuli() {
}

void Store::searchByName(string name) {
	cout << "List of products with price higher or equal to "
				<< name << "  " << endl;
		for(unsigned int i = 0; i < items.size(); i++){
			if(name <= items[i].getName()){
				cout << items[i].getName() << endl;
			}
		}
}

void Store::searchByName() {
}

void Store::addItem() {
	if(getName(items.getName())){
			cerr << "Product already in stock" << endl;
		} else {
			items.push_back(items);
		}
}
