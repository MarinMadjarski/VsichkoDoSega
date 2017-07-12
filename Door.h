/*
 * Door.h
 *
 *  Created on: 19.05.2017 ã.
 *      Author: user
 */

#ifndef DOOR_H_
#define DOOR_H_
#include <string>
#include <iostream>
using namespace std;

class Door {

	friend ostream &operator<<(ostream& out, const Door& obj);
	friend istream &operator>>(istream& in,  Door& obj);
public:

	Door& operator+(const Door&);
	bool operator==(Door&);
	bool operator<(Door&);
	bool operator>(Door&);

	Door();
	Door(int,int,int,string);
	virtual ~Door();
	int doorInfo();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getC() const;
	void setC(int c);
	const string& getColor() const;
	void setColor(const string& color);

private:
	int a; //duljina

	int b; // visochina

	int c;// shirochina

	string color;
};

#endif /* DOOR_H_ */
