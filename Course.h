/*
 * Course.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef COURSE_H_
#define COURSE_H_
#include <iostream>
#include <string>
using namespace std;

class Course {
public:
	Course(string name,int number, int produljitelnost, float price);
	Course();
	virtual ~Course();
	void printInfo();
	const string& getName() const;
	void setName(const string& name);
	int getNumber() const;
	void setNumber(int number);
	float getPrice() const;
	void setPrice(float price);
	int getProduljitelnost() const;
	void setProduljitelnost(int produljitelnost);

private:
	string name;
	int number;
	int produljitelnost;
	float price;
};

#endif /* COURSE_H_ */
