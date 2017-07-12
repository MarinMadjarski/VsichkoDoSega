/*
 * Rational.h
 *
 *  Created on: 3.05.2017 ã.
 *      Author: user
 */

#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <iostream>
using std::ostream;
using std::istream;

class Rational {
	friend ostream &operator<<( ostream& output,  Rational& r );

public:
	   Rational();
       Rational(int,int);
       Rational add
	virtual ~Rational();
private :
	int nom;
	int denom;
	int *ptr;
};

#endif /* RATIONAL_H_ */
