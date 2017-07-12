/*
 * nqmamdumi.h   /// manager.h
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#ifndef NQMAMDUMI_H_
#define NQMAMDUMI_H_
#include <string>   ///  Purvo
using namespace std; ///

class nqmamdumi {
public:
	nqmamdumi(string,string,string,int,int,int); // 3to pishem v skobite
	virtual ~nqmamdumi();        //4to setove i getove
	const string& getDeparment() const;
	void setDeparment(const string& deparment);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	int getHour() const;
	void setHour(int hour);       ///5to imp metod i otivame v cpp faila.
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getSalaryPerhour() const;
	void setSalaryPerhour(int salaryPerhour);
	int getYearOfexp() const;
	void setYearOfexp(int yearOfexp);

private:                         // 2ro
	string firstName;
	string lastName;
	string deparment;
	int salaryPerhour;
	int hour;
	int yearOfexp;
};

#endif /* NQMAMDUMI_H_ */
