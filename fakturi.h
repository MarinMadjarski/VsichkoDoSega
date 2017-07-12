/*
 * fakturi.h
 *
 *  Created on: 5.04.2017 ã.
 *      Author: user
 */

#ifndef FAKTURI_H_
#define FAKTURI_H_
#include<string>
using namespace std;
class fakturi {
private:
	string part;
	string partDescription;
	int quantity;
	float price;
public:
	fakturi();


	fakturi(string, string, int, float);
	virtual ~fakturi();
	const string& getPart() const;
	void setPart(const string& part);
	const string& getPartDescription() const;
	void setPartDescription(const string& partDescription);
	float getPrice() const;
	void setPrice(float price);
	int getQuantity() const;
	void setQuantity(int quantity);
	float getInvoiceAmount();

};

#endif /* FAKTURI_H_ */
