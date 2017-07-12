/*
 * grassworker.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef GRASSWORKER_H_
#define GRASSWORKER_H_
#include "worker.h"

class grassworker : public worker {
public:
	grassworker();
	grassworker(string name,string egn, string address, int area,int stavka);
	virtual ~grassworker();
	virtual void print();
	virtual double calculate();
	int getArea() const;
	void setArea(int area);
	int getStavka() const;
	void setStavka(int stavka);

private:
	int area;
	int stavka;
};

#endif /* GRASSWORKER_H_ */
