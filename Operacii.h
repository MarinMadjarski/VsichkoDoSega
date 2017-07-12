/*
 * Operacii.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef OPERACII_H_
#define OPERACII_H_
#include <string>
#include <vector>
#include "ClassOnline.h"
#include "ClassOffice.h"
#include "Course.h"
using namespace std;

class Operacii {
public:
	Operacii();
	virtual ~Operacii();
	void addName(Course&);
	void printAllCourses();
private:
	vector<Course*> courses;
};

#endif /* OPERACII_H_ */
