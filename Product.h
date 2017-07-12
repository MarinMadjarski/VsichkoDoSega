/*
 * Product.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <string>
#include <iostream>
#include "Manafacturer.h"
using namespace std;

class Product {
public:
	Product();
	Product(string productName, string tip, double price,
			int counter, Manafacturer manafacturer);
	virtual ~Product();
	void print();
	int getCounter() const;
	void setCounter(int counter);
	const Manafacturer& getManafacturer() const;
	void setManafacturer(const Manafacturer& manafacturer);
	double getPrice() const;
	void setPrice(double price);
	const string& getProductName() const;
	void setProductName(const string& productName);
	const string& getTip() const;
	void setTip(const string& tip);

private:
	string productName;
	string tip;
	double price;
	int counter;
	Manafacturer manafacturer;
};

#endif /* PRODUCT_H_ */
