//============================================================================
// Name        : func_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printLogo(){
	cout << "Hello from C++ function" << endl;
	cout << "We are in Sofia" << endl;
}
	void printSign(int number)
	{
		if(number > 0)
		{
			cout <<"Positive"<<endl;
			if(number < 0)
			{
			cout<<"Negative"	<< endl;
			if(number == 0)
			{
				cout<<"zero"<< endl;
			}
			}
		}
	}

	void printSign(int);


int main()
{
	printLogo();
    printSign ;
    int num;
    cout <<"enter number" << endl;
    cin >> num;
    int z;
    cin>> z;
    printSign(z);
	return 0;
}
