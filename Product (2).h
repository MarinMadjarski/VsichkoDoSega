/*
 * Product.h
 *
 *  Created on: 31.05.2017 ã.
 *      Author: user
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <string>
#include <iostream>
using namespace std;

class Product {
public:
	Product(string type, string model, string brand,
	int soldQuantity , float price);
	Product();
	virtual ~Product();
	void printInfo();
	const string& getBrand() const;
	void setBrand(const string& brand);
	const string& getModel() const;
	void setModel(const string& model);
	float getPrice() const;
	void setPrice(float price);
	int getSoldQuantity() const;
	void setSoldQuantity(int soldQuantity);
	const string& getType() const;
	void setType(const string& type);
    bool operator<(const Product& l);
    friend ostream& operator << (ostream& os , const Product& obj);

private :
	string type;
	string model;
	string brand;
	int soldQuantity;
	float price;
};

#endif /* PRODUCT_H_ */
