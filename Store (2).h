#ifndef STORE_H_
#define STORE_H_

#include <vector>
using std::vector;
#include "Cosmetics.h"
class Store {
private:
	static vector<Cosmetics> products;
public:
	Store();
	static void addProduct(const Cosmetics&);
	static bool isInStock(const string&);
	static void searchByPrice(double);
	static void productTypeInfo();

	virtual ~Store();
};

#endif /* STORE_H_ */
