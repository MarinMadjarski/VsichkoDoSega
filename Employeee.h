/*
 * Employeee.h
 *
 *  Created on: 19.04.2017 ã.
 *      Author: user
 */
#include <string>
#ifndef EMPLOYEEE_H_
#define EMPLOYEEE_H_
using namespace std;     /// napravili sme 1 klas,sega tova e 2ri i zapochvame pak ;d
#include "date.h"

class Employeee {
private:
	string name;    ///
	int salary;    ///   purvo tova
	date birthDate; ///
	date hireDate; ///
public:
    void print();
	Employeee(string,int,date&,date&); /// posle tova
	virtual ~Employeee();
	const date& getBirtDdate() const; //
	void setBirtDdate(const date& birtDdate);//
	const date& getHireDate() const;            ///
	void setHireDate(const date& hireDate); //
	const string& getName() const;        //   setove i getove i posle otivame v cpp na 2riq klas
	void setName(const string& name);    //
	int getSalary() const;             //
	void setSalary(int salary);     //
};

#endif /* EMPLOYEEE_H_ */
