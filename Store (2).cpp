#include "Store.h"
#include <string>
#include <iostream>
using std::endl;
using std::cerr;
using std::cout;

vector<Cosmetics> Store::products;

Store::Store() {
	// TODO Auto-generated constructor stub

}

bool Store::isInStock(const string& unique){
	bool isInStock = false;

	for(unsigned int i = 0; i < products.size(); i++){
		string productName = products[i].getName();
		if(unique.compare(productName) == 0){
			isInStock = true;
			break;
		}
	}

	return isInStock;

}

void Store::addProduct(const Cosmetics& product){
	if(isInStock(product.getName())){
		cerr << "Product already in stock" << endl;
	} else {
		products.push_back(product);
	}
}
void Store::searchByPrice(double price){
	cout << "List of products with price higher or equal to "
			<< price << "$." << endl;
	for(unsigned int i = 0; i < products.size(); i++){
		if(price <= products[i].getPrice()){
			cout << products[i].getUnique() << endl;
		}
	}
}

void Store::productTypeInfo(){
	int cream = 0, powder = 0, spray = 0;
	for(unsigned int i = 0; i < products.size(); i++){
		switch(products[i].getType()){
		case Cosmetics::CREAM:
			cream++;
			break;
		case Cosmetics::POWDER:
			powder++;
			break;
		case Cosmetics::SPRAY:
			spray++;
			break;
		default: break;
		}
	}

	cout << "Product type info" << endl;
	cout << "Cosmetics of type cream: " << cream << endl;
	cout << "Cosmetics of type powder: " << powder << endl;
	cout << "Cosmetics of type spray: " << spray << endl;
}
Store::~Store() {
	// TODO Auto-generated destructor stub
}


