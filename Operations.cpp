/*
 * Operations.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "Operations.h"
#include <iostream>
using namespace std;
Operations::Operations() {
	// TODO Auto-generated constructor stub

}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

void Operations::addWorker(worker& obj) {
	workers.push_back(&obj);
}

void Operations::printAllSal() {
	for (unsigned int i = 0 ;  i < workers.size(); i++){
		workers[i]->print();

		if(grassworker* ptr = dynamic_cast<grassworker*>(workers[i])){
	cout <<	ptr->getArea();
	cout << ptr->calculate();
		}
	}
}
