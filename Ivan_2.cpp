//============================================================================
// Name        : Ivan_daskal_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//  Имаме едномерен масив А[n] и К. Да се намери и изведе позицията на първото срещане на К в масива, или -1 ако го няма.
//  Масивът и К се въвеждат от потребителя.
int main() {
	int n;
			cout <<"enter n";
			cin >> n;
			int A[n];
			int k;
			cout <<"enter k";
			cin >> k;

			for(int i = 0; i < n; i++)
			{
				cout <<"A["<< i <<"] = ";
				cin >> A[i];
			}

			for(int i = 0; i < n; i++)
			{
				if(k == A[i]){
					cout << i;
				}
				else{
						cout<<"-1";
						break;
					}
			}


	return 0;
}
