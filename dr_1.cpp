//============================================================================
// Name        : dr_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number,ed,des,stot;
	cout << "enter number" ;
	cin >> number;
	ed=(number % 10) ;
		cout << ed << endl;
		number= number / 10 ;

	    des=(number % 10) ;
	    cout << des << endl;
		number= number / 10 ;
		stot=(number % 10) ;
		cout << stot << endl;
		number= number /10 ;





	return 0;
}
