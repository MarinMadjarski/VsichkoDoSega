//============================================================================
// Name        : cveti_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
			cout <<"enter n";
			cin >> n;
			int m;
			cout <<"enter m";
			cin >> m;
			int A[n][m];
			long long product = 1;

			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					cout<<"A["<< i <<"]["<< j <<"] = ";
					cin >> A[i][j];
				}
			}

			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					product *= A[j][i];
				}
				cout <<"The product is "<< product<<endl;
				product = 1;
			}
	return 0;
}
