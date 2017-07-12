/*
 * reck.cpp
 *
 *  Created on: 18.04.2017 ã.
 *      Author: user
 */

#include "reck.h"

reck::reck(int x1, int y1, int x2, int y2, int x3, int y3, int x4,
		int y4) {
this->x1=x1;
this->x2=x2;
this->x3=x3;
this->x4=x4;
this->y1=y1;
this->y2=y2;
this->y3=y3;
this->y4=y4;


}

reck::reck() {

}

reck::~reck() {
	// TODO Auto-generated destructor stub
}

void reck::corner1(int int1, int int2) {
}

void reck::corner2(int int1, int int2) {
}

void reck::corner3(int int1, int int2) {
}

void reck::corner4(int int1, int int2) {
}

void reck::lenght(int int1) {
}

void reck::area(int int1) {
}

void reck::width(int int1) {
}

void reck::setCoordinates(int x1, int y1, int x2, int y2, int x3, int y3, int x4,
		int y4) {
	this->x1=(x1 > 0 && x1 < 20)? x1  :0;
	this->x2=(x2 > 0 && x2 < 20) ? x2 :0;
	this->x3=(x3 > 0 && x3 < 20) ? x3 :0;
	this->x4=(x4 > 0 && x4 < 20) ? x4 :0;
	this->y1=(y1 > 0 && y1 < 20) ? y1 :0;
	this->y2=(y2 > 0 && y2 < 20) ? y2 :0;
	this->y3=(y3 > 0 && y3 < 20) ? y3 :0;
	this->y4=(y4 > 0 && y4 < 20) ? y4 :0;
}

void reck::perimeter(int int1) {
}
