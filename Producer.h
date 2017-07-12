/*
 * Producer.h
 *
 *  Created on: 24.05.2017 ã.
 *      Author: user
 */

#ifndef PRODUCER_H_
#define PRODUCER_H_

#include <string>
using std::string;
class Producer {
	string name;
	int code;
	string country;
public:
	Producer();
	Producer(const string&, int, const string&);

	virtual ~Producer();
	int getCode() const;
	void setCode(int code);
	const string& getCountry() const;
	void setCountry(const string& country);
	const string& getName() const;
	void setName(const string& name);
	void print() const;
};

#endif /* PRODUCER_H_ */
