/*
 * Operations.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <iostream>
#include <vector>
#include "worker.h"
#include "treeWorker.h"
#include "grassworker.h"
using namespace std;

class Operations {
public:
	Operations();
	virtual ~Operations();
	void addWorker(worker&);
	void printAllSal();
private:
	vector<worker*> workers;
};

#endif /* OPERATIONS_H_ */
