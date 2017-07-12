/*
 * Operacii.cpp
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#include "Operacii.h"

Operacii::Operacii() {
	// TODO Auto-generated constructor stub

}

Operacii::~Operacii() {
	// TODO Auto-generated destructor stub
}

void Operacii::addName(Course& obj) {
	courses.push_back(&obj);
}

void Operacii::printAllCourses() {
	for (unsigned int i = 0 ;  i < courses.size(); i++){
			courses[i]->printInfo();

			if(Course* ptr = dynamic_cast<Course*>(courses[i])){
		cout <<	ptr->getName();
		cout << ptr->getProduljitelnost();
			}
		}
}
