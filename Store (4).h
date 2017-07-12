/*
 * Store.h
 *
 *  Created on: 31.05.2017 ã.
 *      Author: user
 */

#ifndef STORE_H_
#define STORE_H_
#include "Product.h"
#include <vector>
#include <string>
#include "pugixml.hpp"
using namespace std;

class Store {
public:
	Store(const char* filename);
	virtual ~Store();
	const vector<Product*>& getSales() const;
	void setSales(const vector<Product*>& sales);
	float getTotal() const;
	friend bool operator<(const Store& l, const Store& r);
	friend ostream& operator<<(ostream& os, const Store& obj);
	void setTotal(float total);

private :
	vector<Product*>sales;
	float total;
	void readXML(const char* fileName);

};

#endif /* STORE_H_ */
