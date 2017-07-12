/*
 * poluchatel.h
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#include"Adres.h"
#ifndef POLUCHATEL_H_
#define POLUCHATEL_H_
#include<string>
#include<iostream>
#include<vector>
using namespace std;



class poluchatel {
public:
poluchatel();
	poluchatel(string,adres& );
	virtual ~poluchatel();
	const string& getName() const;
	void setName(const string& name);
	const adres& getAdres() const;
	void setAdres(const adres& adres);

private:
	string name;
    adres sAdres;
};

#endif /* POLUCHATEL_H_ */
