//============================================================================
// Name        : ponedelnik_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void getMax(int a, int b,int c){


	if(a > c && b > c)
	{
		cout <<" a and b are max" << endl;
	}
	if(a>c && b<c)
		{
	cout<<"a and c are max"	<< endl;
		}
	if(a<c && b>c)
	{
		cout<<"b and c are max"<< endl;
	}
}
int main() {
int a,b,c;
cout << "enter a,b and c"<<endl;
cin>> a >>b>>c;


	 getMax(a,b,c);



	return 0;
}
