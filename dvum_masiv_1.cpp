//============================================================================
// Name        : dvum_masiv_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[3][4];
	for(int i=0; i < 3; i++){
	for(int j = 0; j < 4; j++){
	cout << "enter element"	<< endl;
	cin >> arr[i][j];
	}
	}

	for(int i=0;i < 3; i++){
	for(int j =0; j < 4; j++){
	cout << arr[i][j] <<" ";
	}
	cout << endl; }
	/*
	i 0 j 0 arr[0][0]
	i 0 j 1 arr[0][1]
	i 0 j 2 arr[0][2]
	i 0 j 3 arr[0][3]
	i 1 j 0 arr[1][0]
	*/
	return 0;
}
