//============================================================================
// Name        : cveti_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,m;
	int result=1;
	cout << "enter n" << endl;
	cin >> n;
	cout << "enter m" << endl;
	cin >> m;
	int A[n][m] ;
	for(int i =0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout <<"A [" << i <<"][" << j << "] =" ;
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
	for(int j = 0; j < m ; j++){
		result = A[i][j] * A[i][j];
		cout << result << " ";
	}
	}
	return 0;
}
