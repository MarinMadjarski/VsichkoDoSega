/*
 * Book.h
 *
 *  Created on: 23.05.2017 ã.
 *      Author: user
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <string>
#include <iostream>
using namespace std;

enum Janr {TRILER = 1,ROMAN = 2, FANTASY = 3};
class Book {
public:
	Book();
	Book(string name,string author, Janr janr, double price);
	virtual ~Book();
	const string& getAuthor() const;
	void setAuthor(const string& author);
	Janr getJanr() const;
	void setJanr(Janr janr);
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);

private:
	string name;
	string author;
	Janr janr;
	double price;

};

#endif /* BOOK_H_ */
