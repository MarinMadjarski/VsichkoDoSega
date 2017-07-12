/*
 * Store.h
 *
 *  Created on: 29.05.2017 ã.
 *      Author: user
 */

#ifndef STORE_H_
#define STORE_H_
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Store {
public:
	Store(string name, string brand , string model , int quantity, float price);
	Store();
	virtual ~Store();
	const string& getBrand() const;
	void setBrand(const string& brand);
	const string& getModel() const;
	void setModel(const string& model);
	const string& getName() const;
	void setName(const string& name);
	float getPrice() const;
	void setPrice(float price);
	int getQuantity() const;
	void setQuantity(int quantity);
	void oborotMagazin();
	void oborotVsichkiMagazini();
	void magazinMinOborot();
	void magazinMaxOborot();
	void maxOborotArtikuli();
	void maxProdajbaArtikuli();
	void searchByName();
	void addItem();
	vector<Store*>items;

private:
	string name;
	string brand;
	string model;
	int quantity;
	float price;
};

#endif /* STORE_H_ */
