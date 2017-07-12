/*
 * tools.h
 *
 *  Created on: 16.05.2017 ã.
 *      Author: user
 */

#ifndef TOOLS_H_
#define TOOLS_H_
#include <string>
using namespace std;

class tools {
public:
	tools(int , string, int , double );
	tools();
	virtual ~tools();
	int getDataOfTools() const;
	void setDataOfTools(int dataOfTools);
	const string& getNameOfTools() const;
	void setNameOfTools(const string& nameOfTools);
	int getNumberOfTools() const;
	void setNumberOfTools(int numberOfTools);
	double getPrice() const;
	void setPrice(double price);

private:
	int dataOfTools;
	string nameOfTools;
	int numberOfTools;
	double price;
};

#endif /* TOOLS_H_ */
