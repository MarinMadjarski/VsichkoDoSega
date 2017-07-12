/*
 * worker.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef WORKER_H_
#define WORKER_H_
#include <string>
using namespace std;

class worker {
public:
	worker();
	worker(string name,string egn,string address);
	virtual double calculate();
	virtual void print();
	virtual ~worker();
	const string& getAddress() const;
	void setAddress(const string& address);
	const string& getEgn() const;
	void setEgn(const string& egn);
	const string& getName() const;
	void setName(const string& name);
	double calculate();
private:
	string name;
	string egn;
	string address;
};

#endif /* WORKER_H_ */
