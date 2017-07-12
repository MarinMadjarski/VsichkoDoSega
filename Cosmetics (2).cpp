#include <iostream>
#include "Cosmetics.h"
using namespace std;

Cosmetics::Cosmetics(): producer() {
	// TODO Auto-generated constructor stub
	this->name = "cosmeticName";
	this->price = 0.0;
	this->quantity = 0;
	this->type = Cosmetics::CREAM;
	this->unique = this->name + this->producer.getName();
}

Cosmetics::Cosmetics(const string& name, const Cosmetics::Type type,
		double price, int quantity, const Producer& producer):
			producer(producer){
	setName(name);
	setType(type);
	setPrice(price);
	setQuantity(quantity);
	setUnique(this->getName() + this->getProducer().getName());
}


const string& Cosmetics::getUnique() const {
	return unique;
}

void Cosmetics::setUnique(const string& unique) {
	this->unique = unique;
}

const string& Cosmetics::getName() const {
	return name;
}

void Cosmetics::setName(const string& name) {
	this->name = name;
}

double Cosmetics::getPrice() const {
	return price;
}

void Cosmetics::setPrice(double price) {
	this->price = price;
}

const Producer& Cosmetics::getProducer() const {
	return producer;
}

int Cosmetics::getQuantity() const {
	return quantity;
}

void Cosmetics::setQuantity(int quantity) {
	this->quantity = quantity;
}

Cosmetics::Type Cosmetics::getType() const {
	return type;
}

void Cosmetics::setType(Type type) {
	this->type = type;
}

void Cosmetics::print() const{
	cout << "Cosmetic " << this->getUnique() << endl;
	cout << this->getName() << " costs " <<
			this->getPrice() << "$. " << endl;
	cout << "Type: " << this->getType() << endl;
	cout << "Units in stock: " << this->getQuantity() << endl;
	producer.print();

}
Cosmetics::~Cosmetics() {
	// TODO Auto-generated destructor stub
}

