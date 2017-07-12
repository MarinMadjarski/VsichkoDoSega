/*
 * Disciplines.h
 *
 *  Created on: 2.05.2017 ã.
 *      Author: user
 */

#ifndef DISCIPLINES_H_
#define DISCIPLINES_H_
#include <iostream>
#include <string>
#include "Startove.h"
using namespace std;

class Disciplines : public Startove {
public:
	Disciplines(string,float,float);
	virtual ~Disciplines();
	void print();
	const string& getName() const;
	void setName(const string& name);
	float getRecordSustezanie() const;
	void setRecordSustezanie(float recordSustezanie);
	float getWorldRecord() const;
	void setWorldRecord(float worldRecord);

private :
	string name;
	float worldRecord;
	float recordSustezanie;
};

#endif /* DISCIPLINES_H_ */
