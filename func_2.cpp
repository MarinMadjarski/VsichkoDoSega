//============================================================================
// Name        : func_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void minimum(int a , int b)
{
if (a < b)
  { cout << "a is minimum" << endl;
  }
if(b < a)
    {
    	cout <<"b is minimum" << endl;
    }

   }











int main() {
	int a,b;
	cout << "enter a" << endl;
	cin >> a ;
	cout << "enter b" << endl;
	cin >> b ;
	  minimum(a,b);

	return 0;
}
