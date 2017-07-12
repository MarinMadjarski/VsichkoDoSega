/*
 * Shef.h
 *
 *  Created on: 21.04.2017 ã.
 *      Author: user
 */

#ifndef SHEF_H_
#define SHEF_H_
#include "Rabotnik.h"
class Shef : public Rabotnik {
public:
	Shef(string,string,int,int,int);
	virtual ~Shef();
	void earnBonus();
	int getBonus() const;
	void setBonus(int bonus);
    void print();
private:
	int bonus;
};

#endif /* SHEF_H_ */
