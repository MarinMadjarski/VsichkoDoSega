/*
 * brokerr.h
 *
 *  Created on: 7.04.2017 ã.
 *      Author: user
 */

#ifndef BROKERR_H_
#define BROKERR_H_
#include<string>
using namespace std;
class brokerr {
private:
	string firstName;
	string secondName;
	int views;
	int deals;
	float sum;
public:
	brokerr(string,string,int,int,float);
	virtual ~brokerr();
	int getDeals() const;
	void setDeals(int deals);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getSecondName() const;
	void setSecondName(const string& secondName);
	float getSum() const;
	void setSum(float sum);
	int getViews() const;
	void setViews(int views);
};

#endif /* BROKERR_H_ */
