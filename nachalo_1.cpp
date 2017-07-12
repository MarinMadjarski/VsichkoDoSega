//============================================================================
// Name        : nachalo_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int temp;
	float price;
	string greetings;
	cout << "enter temperature";
	cin >> temp;
	cout << "temperature is " << temp;

	if (temp > 15) {

		cout << "too hot" << endl;
	} else {
		cout << "normal" << endl;
	}

	//   if(temp < 15){
	//   	cout << "today is normal" << endl;
	//   }

	switch (temp) {
	case 15:
		cout << "normal" << endl;
		break;
	case 16:
		cout << "hot" << endl;
		break;
	case 17:
		cout << "too  hot" << endl;
		break;
	case 30:
		cout << "stay home" << endl;
		break;

	}

	if(temp > 30){
	cout << "stay at home" << endl;
	}
	if (temp > 15 && temp < 30){
		cout << "normal"  << endl;
	}
		return 0;
}
