/*
 * Box.cpp
 *
 *  Created on: 18.05.2017 ã.
 *      Author: user
 */

#include "Box.h"

Box::Box() {
	setX(0);
	setY(0);
	setZ(0);

}

Box::~Box() {
	// TODO Auto-generated destructor stub
}

int Box::getX() const {
	return x;
}

void Box::setX(int x) {
	this->x = x;
}

int Box::getY() const {
	return y;
}

void Box::setY(int y) {
	this->y = y;
}

int Box::getZ() const {
	return z;
}

Box& Box::operator +(const Box& right) {
	int zz = this->z + right.z;
	int yy = this->y + right.y;
	int xx = this->x + right.x;
	Box* newBox = new Box(xx, yy , zz);
	return *newBox;
}

bool Box::operator >(Box& right) {
	if(this->x > right.x && this->y >right.y && this->z > right.z )
	return true;
	return false;
}

bool Box::operator !=(Box& right) {
	if(this->x != right.x && this->y != right.y && this->z != right.z)
	return true;
	return false;
}

bool Box::operator ==(Box& right) {
	if(this->x == right.x && this->y == right.y && this->z == right.z)
	return true;
	return false;
}



void Box::setZ(int z) {
	this->z = z;
}
Box::Box(int x, int y, int z) {
	setX(x);
	setY(y);
	setZ(z);
}
    istream& operator>>(istream& in, Box& obj){
	in.ignore(1);
	in >> obj.x;
	in.ignore(1);
	in >>obj.y;
	in.ignore(1);
	in >> obj.z;
	in.ignore(1);
	return in;
}
    ostream& operator<<(ostream& out,const Box& obj){
    	out << "{{" << obj.x <<"-"<< obj.y <<"-"<< obj.z <<"}}";
    	return out;
    }
