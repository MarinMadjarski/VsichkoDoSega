/*
 * Rabotnik.h
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#ifndef RABOTNIK_H_
#define RABOTNIK_H_
#include <string>
#include <iostream>
using namespace std;

class Rabotnik {
public:
	Rabotnik(string,string,int,int);
	virtual ~Rabotnik();
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getSalary() const;
	void setSalary(int salary);
	int getYear() const;
	void setYear(int year);
	void print();

private:
	string firstName;
	string lastName;
	int year;
	int salary;
};

#endif /* RABOTNIK_H_ */
