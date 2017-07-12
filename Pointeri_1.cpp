//============================================================================
// Name        : Pointeri_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printArr (int* aPtr , const int &size )
{
	for(int i=0 ; i < size ;  i++){
		cout << *aPtr << endl;
		aPtr++;
	}
	cout<< *(aPtr-2) << endl;
	//for(int i=0 ; i < size ;  i++){
//		cout << aPtr[i] << endl;
	///}
   }

int main() {

	int size = 5;
	int *bPtr = &size;
	//cout << *bPtr;
	int arr[]= {3,6,7,8,2} ;
  printArr(arr , size);

	return 0;
}
