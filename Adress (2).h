/*
 * Adress.h
 *
 *  Created on: 3.05.2017 ã.
 *      Author: user
 */

#ifndef ADRESS_H_
#define ADRESS_H_
#include <string>
#include <iostream>
using namespace std;

class Adress {
	friend ostream &operator<<(ostream & ,const Adress &) ;
	 friend istream &operator>>( istream &, Adress & );
public:
	Adress();
	virtual ~Adress();
private :
	string grad;
	string ulica;
	string nomer;
};

#endif /* ADRESS_H_ */
