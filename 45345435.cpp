//============================================================================
// Name        : 45345435.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int *aPtr = new  int [10] ;
	for (int i=0 ; i < 10 ; i++){
		aPtr[i] = 200 ;
	}
	for (int i = 0 ; i < 10 ; i++){
		cout << aPtr[i] << " " << endl;
	}
	delete[] aPtr;
	return 0;
}
