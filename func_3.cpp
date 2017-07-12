//============================================================================
// Name        : func_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int multiply(int,int);
int main() {
int num1,num2;
cout << "enter numbers" << endl;
cin>>num1>>num2	;
int res;
res=multiply(num1,num2)	;
cout << res ;

	return 0;
}

int multiply(int number1 ,int number2){
	int result = number1 * number2;
	return result;
}
