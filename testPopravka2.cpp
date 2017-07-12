//============================================================================
// Name        : testPopravka2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Product.h"
#include "Manafacturer.h"
#include <iostream>
using namespace std;

int main() {

Manafacturer man1("Adidas" ,"545" , "Germany");
Manafacturer man2("Davidoff", "346" ," Germamy");

Product pro1("Vichy" , "losion" , 34.5 , 20 ,man1) ;
Product pro2("Garnier" , "shampoo" , 34.5 , 20 ,man2) ;

pro1.print();
pro2.print();

Manafacturer m1;
m1.addManafacturer(&man1);
m1.addManafacturer(&man2);
m1.searchByName(" Adidas");




	return 0;
}









