//============================================================================
// Name        : uprZaKateto1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Cosmetics.h"
#include "Producer.h"
#include "Store.h"

using namespace std;

int main() {
	Producer p1("IvanCo", 12, "Bulgaria");
	Producer p2("Nivea", 123, "USA");
	Producer p3("AloeVera", 853, "China");
	Producer p4("Schwarckopf", 134, "Germany");
	Producer p5("NigHau", 2344, "Japan");
	Cosmetics c1("Shampoo", Cosmetics::CREAM, 91.2, 120, p1);
	Cosmetics c2("Deodorant", Cosmetics::SPRAY, 12.67, 124, p2);
	Cosmetics c3("Shnorhel", Cosmetics::POWDER, 235.35, 325, p3);
	Cosmetics c4("Dakel", Cosmetics::CREAM, 968.32, 256, p4);
	Cosmetics c5("Meow", Cosmetics::SPRAY, 134, 325, p5);
	Cosmetics c6("Pizza", Cosmetics::POWDER, 2213.35, 3252, p1);
	Cosmetics c7("Frankenstein", Cosmetics::CREAM, 9845.6, 256, p2);
	Cosmetics c8("Boiler", Cosmetics::SPRAY, 246.65, 32.5, p5);
	Cosmetics c9("Shkoda", Cosmetics::POWDER, 345.66, 135, p3);
	Cosmetics c10("Mazilo", Cosmetics::CREAM, 2354.245, 2435, p4);

	Store::addProduct(c1);
	Store::addProduct(c1);
	Store::addProduct(c2);
	Store::addProduct(c2);
	Store::addProduct(c3);
	Store::addProduct(c3);
	Store::addProduct(c4);
	Store::addProduct(c4);
	Store::addProduct(c5);
	Store::addProduct(c5);
	Store::addProduct(c6);
	Store::addProduct(c7);
	Store::addProduct(c7);
	Store::addProduct(c8);
	Store::addProduct(c8);
	Store::addProduct(c9);
	Store::addProduct(c9);
	Store::addProduct(c10);
	Store::addProduct(c10);

	Store::searchByPrice(121);
	cout << endl;
	Store::productTypeInfo();
	return 0;
}


