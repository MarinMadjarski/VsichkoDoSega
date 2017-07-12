/*
 * avtor.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef AVTOR_H_
#define AVTOR_H_
#include <string>
using namespace std;

class avtor {
public:
	avtor();
	avtor(string firstName,string lastName,int rate);
	void print();
	virtual ~avtor();
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getRate() const;
	void setRate(int rate);

private:
	string firstName;
	string lastName;
	int rate;
};

#endif /* AVTOR_H_ */
