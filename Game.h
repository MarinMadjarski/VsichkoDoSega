/*
 * Game.h
 *
 *  Created on: 5.06.2017 ã.
 *      Author: user
 */

#ifndef GAME_H_
#define GAME_H_
#include <iostream>
#include <string>
using namespace std;

class Game {
public:
	Game(int id, string name, int level, double startcredit, double endcredit);
	Game();
	virtual ~Game();
	double getProfit();
	void print();
	double getEndcredit() const;
	void setEndcredit(double endcredit);
	int getId() const;
	void setId(int id);
	int getLevel() const;
	void setLevel(int level);
	const string& getName() const;
	void setName(const string& name);
	double getStartcredit() const;
	void setStartcredit(double startcredit);

private:
	int id;
	string name;
	int level;
	double startcredit;
	double endcredit;
};

#endif /* GAME_H_ */
