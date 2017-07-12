//============================================================================
// Name        : Ivan_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	int counter = 0;
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
					counter = counter + 1;
				}
			}
			cout<<"В масива A[n], К се съдържа "<<counter<<" пъти."<<endl;


	return 0;
}
