/*
 * triangle.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
using namespace std;

class triangle {
public:
	triangle(int,int,int,int);
	virtual ~triangle();
	triangle& operator + (const triangle&);
	bool operator==(triangle&);
	bool operator!=(triangle&);
	friend istream& operator>>(istream&,triangle&);
		friend ostream& operator<<(ostream&,const triangle&);
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getC() const;
	void setC(int c);
	int getH() const;
	void setH(int h);

private:
	int a;
	int b;
	int c;
	int h;
};

#endif /* TRIANGLE_H_ */
