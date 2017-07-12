/*
 * SeniorExpert.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */
#include<string>
#ifndef SENIOREXPERT_H_
#define SENIOREXPERT_H_
#include "Expert.h"
using namespace std;

class SeniorExpert : public Expert{
public:
	SeniorExpert();
	virtual ~SeniorExpert();
	void print();
	const string& getTehnologies() const;
	void setTehnologies(const string& tehnologies);

private:
	string tehnologies;
};

#endif /* SENIOREXPERT_H_ */
