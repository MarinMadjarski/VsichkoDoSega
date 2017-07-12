//============================================================================
// Name        : ponedelnik_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
string printDigit(int num){

		switch(num % 10 ){
		case 0: return "zero";
		case 1: return "one ";
		case 2: return  "two ";
		case 3: return  "three ";
		case 4: return "four " ;
		case 5: return  "five " ;
		case 6: return "six " ;
		case 7: return "seven ";
		case 8: return "eight " ;
		case 9: return  "nine " ;


		}
		return "";
	}
int main() {



	int num;
    cout<<"enter number"<< endl;
    cin >> num;


string results  =	printDigit(num);

cout << "results is " << results << endl;

	return 0;
}
