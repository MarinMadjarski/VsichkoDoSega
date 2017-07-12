#ifndef COSMETICS_H_
#define COSMETICS_H_

#include <string>
using std::string;
#include "Producer.h"


class Cosmetics {
public:
	enum Type {CREAM, POWDER, SPRAY};
	Cosmetics();
	Cosmetics(const string&, const Cosmetics::Type, double, int, const Producer&);
	virtual ~Cosmetics();
	const string& getUnique() const;
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);
	const Producer& getProducer() const;
	int getQuantity() const;
	void setQuantity(int quantity);
	Type getType() const;
	void setType(Type type);
	void print() const;
private:
	string unique;
	string name;
	Type type;
	double price;
	int quantity;
	Producer producer;
	void setUnique(const string&);
};

#endif /* COSMETICS_H_ */
