/*
 * Client.h
 *
 *  Created on: 28.04.2017 ã.
 *      Author: user
 */
#ifndef CLIENT_H_
#define CLIENT_H_


#include <string>
#include <iostream>
#include "Adress.h"

using namespace std;

class Client{

public:
	Client(string name, Adress nomer1);
	virtual ~Client();

	const string& getName() const;
	void setName(const string& name);
	void print();
	void SetAdress(Adress nomer1);
	Adress nomer1;

private:
	string name;


};

#endif /* CLIENT_H_ */
