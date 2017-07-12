/*
 * Game.cpp
 *
 *  Created on: 5.06.2017 ã.
 *      Author: user
 */

#include "Game.h"

Game::Game() {
 setId (0);
 setName (" ");
 setLevel (0);
 setStartcredit (0);
 setEndcredit (0);

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

double Game::getEndcredit() const {
	return endcredit;
}

void Game::setEndcredit(double endcredit) {
	this->endcredit = endcredit;
}

int Game::getId() const {
	return id;
}

void Game::setId(int id) {
	this->id = id;
}

int Game::getLevel() const {
	return level;
}

void Game::setLevel(int level) {
	this->level = level;
}

const string& Game::getName() const {
	return name;
}

void Game::setName(const string& name) {
	this->name = name;
}

double Game::getStartcredit() const {
	return startcredit;
}

Game::Game(int id, string name, int level, double startcredit,
		double endcredit) {
	setId(id);
	setName(name);
	setLevel(level);
	setStartcredit(startcredit);
	setEndcredit(endcredit);
}

double Game::getProfit() {
	return startcredit * endcredit ;
}

void Game::print() {
	std::cout << id << " " << name << " " << level << " "
	 << startcredit << " " << endcredit << std::endl;
}

void Game::setStartcredit(double startcredit) {
	this->startcredit = startcredit;
}
