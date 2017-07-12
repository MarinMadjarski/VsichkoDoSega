/*
 * Atleti.h
 *
 *  Created on: 2.05.2017 ã.
 *      Author: user
 */

#ifndef ATLETI_H_
#define ATLETI_H_
#include <iostream>
#include <string>
#include "Startove.h"
using namespace std;

class Atleti  : public Startove{
public:
	Atleti(string,string,float,string);
	virtual ~Atleti();
	void print();
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	const string& getNacionality() const;
	void setNacionality(const string& nacionality);
	float getRecord() const;
	void setRecord(float record);

private:
	string firstName;
	string lastName;
	float record;
	string nacionality;
};

#endif /* ATLETI_H_ */
