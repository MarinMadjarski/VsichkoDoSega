/*
 * ClassOffice.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef CLASSOFFICE_H_
#define CLASSOFFICE_H_
#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

class ClassOffice  : public Course{
public:
	ClassOffice(string name,int number, int produljitelnost, float price,string tip,
	string adres, string zala);
	ClassOffice();
	virtual ~ClassOffice();
	virtual void print();
	const string& getAdres() const;
	void setAdres(const string& adres);
	const string& getTip() const;
	void setTip(const string& tip);
	const string& getZala() const;
	void setZala(const string& zala);
	virtual double calculate();

private:
	string tip;
	string adres;
	string zala;
};

#endif /* CLASSOFFICE_H_ */
