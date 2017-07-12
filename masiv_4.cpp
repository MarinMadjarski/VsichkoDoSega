//============================================================================
// Name        : masiv_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
int array[10];
int sum = 0;
for(int i = 0; i < 10; i++)	{
	cout << "enter ten numbers"	;
	cin >> array[i];
}
for(int i=0; i < 10 ; i++){
	sum=sum + array[i];
}
cout <<"the sum is" << sum << endl;
	return 0;
}
