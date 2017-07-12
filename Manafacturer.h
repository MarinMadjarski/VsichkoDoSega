/*
 * Manafacturer.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef MANAFACTURER_H_
#define MANAFACTURER_H_
#include <iostream>
#include <string>
using namespace std;

class Manafacturer {
public:
	Manafacturer(string name, string code, string country);
	Manafacturer();
	virtual ~Manafacturer();
	void printInfo();
	const string& getCode() const;
	void setCode(const string& code);
	const string& getCountry() const;
	void setCountry(const string& country);
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	string code;
	string country;
};

#endif /* MANAFACTURER_H_ */
