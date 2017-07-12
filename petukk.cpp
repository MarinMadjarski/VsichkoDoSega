//============================================================================
// Name        : petukk.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,product;
	product=1;
	cout << "enter n" ;
	cin >> n ;
	for(int i = 1; i <= n; i++){
		product = i * i;
		cout << product << endl;
	}

	return 0;
}
