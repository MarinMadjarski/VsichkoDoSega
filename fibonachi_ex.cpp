//============================================================================
// Name        : fibonachi_ex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int firstnumber = 0 ;
	int secondnumber = 1;
	int newnumber;
	int n;
	cin >> n ;
	int counter=0;
	while( counter < n){
		newnumber = firstnumber + secondnumber; // 1 2 3 5 8
		firstnumber=secondnumber; //1 1 2 3
		secondnumber= newnumber; //1 2 3 5
		counter ++;
		cout << newnumber << endl;
	}



	return 0;
}
