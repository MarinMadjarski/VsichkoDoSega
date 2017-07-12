//============================================================================
// Name        : Ivan_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
			int n;		//broi elementi ot masiva
			cout <<"Enter n = ";
			cin >> n;		//wywejdam broq
			int A[n];		//deklarirame masiw s N elementa
			int minNumber;	// minimalno chislo
			int counter = 0;

			for(int i = 0; i < n; i++)		// wyrtim cikyl ot 0 do n
			{
				cout <<"A["<< i <<"] = ";	// stoinosti na elementite ot masiwa
				cin >> A[i];				// wywejdame stoinostite
			}
		for (int i =0; i < n; i++)		//cikyl za namirane na MAX stoinost
			{
				if(A[i] <= A[i-1]){          // v kruglite skobi e uslovieto
					int minArray[n];
					minNumber = A[i];
					A[i] = minArray[i];
					if(minArray[i] > A[i])
					{
						counter++;
					}

				}
			}
			cout<<"Най - малкият елемент от A[n] е: "<<minNumber<<" и се съдържа "<<counter<<" пъти."<<endl;	//izpiswame w terminala stoinostta.



	return 0;
}
