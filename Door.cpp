/*
 * Door.cpp
 *
 *  Created on: 19.05.2017 г.
 *      Author: user
 */

#include "Door.h"

Door::Door() {
	setA(0);
	setB(0);
	setC(0);
	setColor("");
}

Door::~Door() {
	// TODO Auto-generated destructor stub
}

int Door::getA() const {
	return a;
}

void Door::setA(int a) {
	this->a = a;
}

int Door::getB() const {
	return b;
}

void Door::setB(int b) {
	this->b = b;
}

int Door::getC() const {
	return c;
}

void Door::setC(int c) {
	this->c = c;
}

const string& Door::getColor() const {
	return color;
}

Door& Door::operator +(const Door& right) {
	int aa = this->a + right.a;
	int bb = this->b + right.b;
	int cc = this->c + right.c;
	string ccolor= this->color + right.color;
	Door* newDoor = new Door(aa, bb , cc , color);
	return *newDoor;
}

bool Door::operator ==(Door& right) {
	if(this->a == right.a && this->b ==right.b && this->c == right.c && this->color== right.color)
	return true;
	return false;
}

bool Door::operator <(Door& right) {
	if(this->a < right.a && this->b < right.b && this->c < right.c && this->color < right.color)
	return true;
	return false;
}

bool Door::operator >(Door& right) {
	if(this->a > right.a && this->b >right.b && this->c > right.c && this->color>right.color)
	return true;
	return false;
}

Door::Door(int a, int b, int c, string color) {
	setA(a);
	setB(b);
	setC(c);
	setColor(color);
}

int Door::doorInfo() {
	if(getB() < 100 && getB() > 250){
			cout<<"Размерът на вратата е невалиден"<<endl;
			return 0;
		}
	else if(getA() < 60 && getA() > 150){
			cout<<"Размерът на вратата е невалиден"<<endl;
			return 0;
		}
}

void Door::setColor(const string& color) {
	this->color = color;
}
istream& operator>>(istream& in, Door& obj){
	in.ignore(2);
	in >> obj.a;
	in.ignore(1);
	in >>obj.b;
	in.ignore(1);
	in >> obj.c;
	in.ignore(1);
	in >> obj.color;
	return in;
}
ostream& operator<<(ostream& out,const Door& obj){
	out << "d:" << obj.a <<"x"<< obj.b <<"x"<< obj.c <<":" << obj.color ;
	return out;
}
