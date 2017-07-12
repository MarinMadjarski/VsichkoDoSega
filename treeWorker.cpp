/*
 * treeWorker.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "treeWorker.h"
#include <iostream>
using namespace std;

treeWorker::treeWorker():worker() {
	// TODO Auto-generated constructor stub
setBonus(0);
setSalaryPerTree(0);
}

treeWorker::~treeWorker() {
	// TODO Auto-generated destructor stub
}

int treeWorker::getBonus() const {
	return bonus;
}

void treeWorker::setBonus(int bonus) {
	this->bonus = bonus;
}

int treeWorker::getSalaryPerTree() const {
	return salaryPerTree;
}

treeWorker::treeWorker(string name, string egn, string address, int bonus,
		int sal) :worker(name,egn,address){
	setBonus(bonus);
	setSalaryPerTree(sal);
}

void treeWorker::setSalaryPerTree(int salaryPerTree) {
	this->salaryPerTree = salaryPerTree;
}

void treeWorker::print() {
	worker::print();
	cout<<getBonus() << " " << getSalaryPerTree();
}

double treeWorker::calculate() {
	return getBonus() * getSalaryPerTree();
}
