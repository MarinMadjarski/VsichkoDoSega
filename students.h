/*
 * students.h
 *
 *  Created on: 4.04.2017 ã.
 *      Author: user
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_
#include<string>


class students {
private:
string firstName;
string secondName;
int age;
public:
	students();
	students(string,string,int);
	void setFirstName(string);
	void setLastName(string);
	void setAge(int);
	string getFirstName();
	string getLastName();
	int getAge();

	void showInfo();

	virtual ~students();
};

#endif /* STUDENTS_H_ */
