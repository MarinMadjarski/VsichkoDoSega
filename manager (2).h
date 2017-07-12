/*
 * manager.h
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include <string>  ///
using namespace std;  /// purvo

class manager {
public:
	manager();//// 3to v skobite pishem i pravim funkciq
	virtual ~manager();  ////
	void print();
	int earnings();             /// 4to getove i setove
	const string& getDeparment() const;
	void setDeparment(const string& deparment);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	int getHour() const;
	void setHour(int hour);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getSalaryPerhour() const;
	void setSalaryPerhour(int salaryPerhour);
	int getYearOfexp() const;
	void setYearOfexp(int yearOfexp);

private:
///2ro
	string firstName;
	string lastName;
	string deparment;
	int salaryPerhour;
	int hour;
	int yearOfexp;
};

#endif /* MANAGER_H_ */
