/*
 * Books.cpp
 *
 *  Created on: 18.05.2017 ã.
 *      Author: user
 */

#include "Books.h"

Books::Books(){
	setX(0);
	setY(0);
	setZ(0);
}

Books::~Books() {
	// TODO Auto-generated destructor stub
}

int Books::getX() const {
	return x;
}

void Books::setX(int x) {
	this->x = x;
}

int Books::getY() const {
	return y;
}

void Books::setY(int y) {
	this->y = y;
}

int Books::getZ() const {
	return z;
}

Books& Books::operator +(const Books& right) {
	 int zz = this->z + right.z;
		int yy = this->y + right.y;
		int xx = this->x + right.x;
		Books* newBooks = new Books(xx, yy , zz);
		return *newBooks;
}

bool Books::operator >(Books& right) {
	if(this->x > right.x && this->y >right.y && this->z > right.z )
		return true;
		return false;
}

bool Books::operator !=(Books& right) {
	if(this->x != right.x && this->y != right.y && this->z != right.z)
			return true;
			return false;
}

bool Books::operator ==(Books& right) {
	if(this->x == right.x && this->y == right.y && this->z == right.z)
			return true;
			return false;
}

Books::Books(int x, int y, int z) {
	setX(x);
	setY(y);
	setZ(z);
}

void Books::setZ(int z) {
	this->z = z;
}
istream& operator>>(istream& in, Books& obj){
	in.ignore(1);
	in >> obj.x;
	in.ignore(1);
	in >>obj.y;
	in.ignore(1);
	in >> obj.z;
	in.ignore(1);
	return in;
}
ostream& operator<<(ostream& out,const Books& obj){
	out << "{{" << obj.x <<"-"<< obj.y <<"-"<< obj.z <<"}}";
	return out;
}
