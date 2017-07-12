//============================================================================
// Name        : dvum_masiv2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[3][3];
	for(int i=0; i < 3; i++)
	{
	for(int j = 0; j < 3; j++)
	  {
	   cout << "enter element"	<< endl;
	   cin >> arr[i][j];
	  }
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0 ; j < 3; j++)
		{
			if(arr[i][j < 0])
			{
				cout << arr[i][j]<<" ";
			}
		}
	}






	return 0;
}
