/*
 * Box.h
 *
 *  Created on: 18.05.2017 ã.
 *      Author: user
 */

#ifndef BOX_H_
#define BOX_H_
#include <iostream>
using namespace std;



class Box {
	friend ostream &operator<<(ostream& out, const Box& obj);
	friend istream &operator>>(istream& in,  Box& obj);


public:
	Box& operator+(const Box&);
	bool operator>(Box&);
	bool operator!=(Box&);
	bool operator==(Box&);

	Box(int x,int y,int z);
	Box();

	virtual ~Box();
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

#endif /* BOX_H_ */
