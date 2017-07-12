//============================================================================
// Name        : zadacha_15_petuk.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	while(number > 0){
	int digit = number % 10;
	number=number /10 ;
	cout << digit << " ";
	}
	return 0;
}
