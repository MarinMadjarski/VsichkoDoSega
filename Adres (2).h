/*
 * Adres.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */
#include <string>
#include <iostream>
#ifndef ADRES_H_
#define ADRES_H_
using namespace std;
class Adres {
public:
	Adres();
	Adres(string,string,int);
	virtual ~Adres();
	const string& getGrad() const;
	void setGrad(const string& grad);
	int getNomer() const;
	void setNomer(int nomer);
	const string& getUlica() const;
	void setUlica(const string& ulica);
	void print();

private:
	string grad;
	string ulica;
	int nomer;
};

#endif /* ADRES_H_ */
