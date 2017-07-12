/*
 * triangle.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "triangle.h"


triangle::~triangle() {
	// TODO Auto-generated destructor stub
}

int triangle::getA() const {
	return a;
}

void triangle::setA(int a) {
	this->a = a;
}

int triangle::getB() const {
	return b;
}

void triangle::setB(int b) {
	this->b = b;
}

int triangle::getC() const {
	return c;
}

void triangle::setC(int c) {
	this->c = c;
}

int triangle::getH() const {
	return h;
}

triangle::triangle(int a, int b, int c, int h) {
	setA(a);
	setB(b);
	setC(c);
	setH(h);
}

triangle& triangle::operator +(const triangle&) {
	triangle& triangle::operator + (const triangle& right){
		int aa=this->a + right.a;
		int bb=this->b + right.b;
		int cc=this->c + right.c;
		int hh=this->h + right.h;

		triangle newTriangle = new triangle();
		newTriangle->seta(aa);
			newTriangle->setb(bb);
			newTriangle->setZ(zz);


	}
}

bool triangle::operator ==(triangle&) {
}

bool triangle::operator !=(triangle&) {
}

void triangle::setH(int h) {
	this->h = h;
}
