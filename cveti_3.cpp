//============================================================================
// Name        : cveti_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
		cout<<"enter n "<< endl;;
		cin>> n;
		int m;
		cout <<"enter m "<< endl;
		cin >> m;
		int A[n][m];


		for(int i = 0; i < n; i++)
				{
					for(int j = 0; j < m; j++)
					{
						cout<<"A [" << i << "][" << j << "] = ";
						cin>> A[i][j];
					}
				}

		int k;
		cout <<"enter k";
		cin >> k;


		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(k == A[i][j])
				{
					cout << "yes ";
					break;
				}
				else
				{
					cout <<"no";
					break;
				}
			}
		}

	return 0;
}
