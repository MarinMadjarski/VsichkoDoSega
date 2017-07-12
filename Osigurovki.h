/*
 * Osigurovki.h
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#ifndef OSIGUROVKI_H_
#define OSIGUROVKI_H_
#include "Rabotnik.h"
class Osigurovki : public Rabotnik{
public:
	Osigurovki(string,string,int,int,int,int);
	virtual ~Osigurovki();
	void print();
	void earnBonus();
     void Osigurovki();
	int getOsigurovki() const;
	void setOsigurovki(int osigurovki);

private:
	int osigurovki;
};

#endif /* OSIGUROVKI_H_ */
