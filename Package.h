/*
 * Package.h
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */
#include <string>
#include <iostream>
#ifndef PACKAGE_H_
#define PACKAGE_H_
using namespace std;

class Package {
public:
	Package(float,int);
	virtual ~Package();
	void print();
	int getCost() const;
	void setCost(int cost);
	float getWeight() const;
	void setWeight(float weight);

private:
	float weight;
	int cost;
};

#endif /* PACKAGE_H_ */
