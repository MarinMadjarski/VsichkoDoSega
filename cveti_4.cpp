//============================================================================
// Name        : cveti_4.cpp
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
			int sum = 0;

			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					cout <<"A["<< i <<"]["<< j <<"] = ";
					cin >> A[i][j];
				}
			}

			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					sum += A[i][j];
				}
				cout << "The sum is: " << sum << " ";
				sum = 0;
			}


	return 0;
}
