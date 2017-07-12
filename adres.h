/*
 * adres.h
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#ifndef ADRES_H_
#define ADRES_H_
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class adres {
public:
	adres(string,string,int);
	virtual ~adres();
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
