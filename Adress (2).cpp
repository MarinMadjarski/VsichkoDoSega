/*
 * Adress.cpp
 *
 *  Created on: 3.05.2017 ã.
 *      Author: user
 */

#include "Adress.h"

#include<iomanip>
using std::setw;
Adress::Adress() {
	// TODO Auto-generated constructor stub

}

Adress::~Adress() {
	// TODO Auto-generated destructor stub
}

ostream &operator<<( ostream &output, const Adress &info )
{
	output<<info.grad<< "," << info.ulica << "," << info.nomer ;
	return output;
}

istream &operator>>( istream &input, Adress &info ){
	 input >> setw( 3 ) >> info.grad ;
	 input.ignore(1);
	 input>> setw(6) >> info.ulica;
	 input.ignore(1);
	 input>> setw(5)>> info.nomer;
	 input.ignore(1);
	 return input;
}
