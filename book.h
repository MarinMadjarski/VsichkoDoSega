/*
 * book.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include<string>
#include "Avtor.h"
using namespace std;

class book {
public:
	book();
	book(string name, string janr, avtor aavtor, int isbn);
	virtual ~book();
	void print();
	const avtor& getAavtor() const;
	void setAavtor(const avtor& aavtor);
	int getIsbn() const;
	void setIsbn(int isbn);
	const string& getJanr() const;
	void setJanr(const string& janr);
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	string janr;
	avtor aavtor;
	int isbn;
};

#endif /* BOOK_H_ */
