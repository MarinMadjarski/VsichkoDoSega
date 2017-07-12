/*
 * Casino.h
 *
 *  Created on: 5.06.2017 ã.
 *      Author: user
 */

#ifndef CASINO_H_
#define CASINO_H_
#include "pugixml.hpp"
#include <iostream>
using namespace std;

class Casino {
public:
	Casino();
	virtual ~Casino();
	void readXml();
};

#endif /* CASINO_H_ */
