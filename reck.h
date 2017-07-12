/*
 * reck.h
 *
 *  Created on: 18.04.2017 ã.
 *      Author: user
 */

#ifndef RECK_H_
#define RECK_H_
#include <iostream>
#include <string>
using namespace std;
class reck {
private:
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;
public:
	reck(int, int  , int , int , int , int  , int , int);
	void setCoordinates(int,int,int,int,int,int,int,int);
	virtual ~reck();
	void corner1(int,int);
	void corner2(int,int);
	void corner3(int,int);
	void corner4(int,int);
	void lenght(int);
	void area(int);
	void width(int);
	void perimeter(int);
};

#endif /* RECK_H_ */
