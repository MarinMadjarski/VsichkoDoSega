/*
 * Adress.h
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */
#ifndef ADRESS_H_
#define ADRESS_H_

#include <string>
#include <iostream>
#include "Client.h"

using namespace std;

class Adress{
public:
	Adress(string grad,string ulica,int nomer);
	virtual ~Adress();

	void print();

	const string& getGrad() const;
	void setGrad(const string& grad);

	int getNomer() const;
	void setNomer(int nomer);

	const string& getUlica() const;
	void setUlica(const string& ulica);

	void funkciqOver();

private:
	string grad;
	string ulica;
	int nomer;


};

#endif /* ADRESS_H_ */
