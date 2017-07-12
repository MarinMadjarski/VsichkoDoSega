/*
 * treeWorker.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef TREEWORKER_H_
#define TREEWORKER_H_
#include "worker.h"

class treeWorker : public worker {
public:
	treeWorker();
	treeWorker(string name, string egn, string address, int bonus ,int sal);
	virtual ~treeWorker();
	int getBonus() const;
	void setBonus(int bonus);
	int getSalaryPerTree() const;
	void setSalaryPerTree(int salaryPerTree);
	virtual void print();
	virtual double calculate();

private:
	int bonus;
	int salaryPerTree;
};

#endif /* TREEWORKER_H_ */
