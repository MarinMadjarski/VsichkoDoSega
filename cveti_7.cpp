//============================================================================
// Name        : cveti_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


		int n;
			cout << "enter n " << endl;
			;
			cin >> n;
			int m;
			cout << "enter m " << endl;
			cin >> m;
			int A[n][m];

			int k;
			cout << "enter k";
			cin >> k;

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << "A [" << i << "][" << j << "] = ";
					cin >> A[i][j];
				}
			}


			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (A[i][j] == k) {
						cout << " Позицията е [" << i << "][" << j << "]  ";
					}
				}
			}
	return 0;
}
