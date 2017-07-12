/*
 * car.h
 *
 *  Created on: 5.04.2017 ã.
 *      Author: user
 */
#include<string>
#ifndef CAR_H_
#define CAR_H_
using namespace std;


class car {
private:
	string model;
	float fuelConsumption;
	string color;
public:
	car();
	car(string model, float fuelConsumption, string color);
	virtual ~car();
	const string& getColor() const;
	void setColor(const string& color);
	float getFuelConsumption() const;
	void setFuelConsumption(float fuelConsumption);
	const string& getModel() const;
	void setModel(const string& model);

	float calculateLiters(int distance);
};


#endif /* CAR_H_ */
