/*
 * ClassOnline.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef CLASSONLINE_H_
#define CLASSONLINE_H_
#include <iostream>
#include <string>
#include "Course.h"
#include "ClassOffice.h"
using namespace std;

class ClassOnline :public Course {
public:
	ClassOnline();
	ClassOnline(string name,int number, int produljitelnost, float price,
	string level,string kind ,int hour);
	virtual ~ClassOnline();
	virtual void print();
	virtual double calculate();
	int getHour() const;
	void setHour(int hour);
	const string& getKind() const;
	void setKind(const string& kind);
	const string& getLevel() const;
	void setLevel(const string& level);

private:
	string level;
	string kind;
	int hour;
};

#endif /* CLASSONLINE_H_ */
