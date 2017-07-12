/*
 * OvernightPackage.h
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */
#ifndef OVERNIGHTPACKAGE_H_
#define OVERNIGHTPACKAGE_H_

#include <string>			// Include biblioteki i drugite headeri
#include <iostream>
#include "Package.h"

using namespace std;

class OvernightPackage {	// imeto na klasa

public:

	void funkciq();			// funkciq koqto izpylnqwa dadeno neshto
	OvernightPackage(float);
	virtual ~OvernightPackage();

private:

	float tax;

};

#endif /* OVERNIGHTPACKAGE_H_ */
