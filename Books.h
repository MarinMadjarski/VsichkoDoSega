/*
 * Books.h
 *
 *  Created on: 18.05.2017 ã.
 *      Author: user
 */

#ifndef BOOKS_H_
#define BOOKS_H_
#include<iostream>
using namespace std;

class Books {

	friend ostream &operator<<(ostream& out, const Books& obj);
	friend istream &operator>>(istream& in,  Books& obj);

public:

	Books& operator+(const Books&);
		bool operator>(Books&);
		bool operator!=(Books&);
		bool operator==(Books&);


	Books();
	Books(int,int,int);
	virtual ~Books();
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	int getZ() const;
	void setZ(int z);

private:
	int x;
	int y;
	int z;
};

#endif /* BOOKS_H_ */
