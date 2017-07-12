//============================================================================
// Name        : testPopravka1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Door.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
        int a;
        int b;
        int c;
        string color;

        cin>>a;
        cin>>b;
        cin>>c;
        cin>>color;
	    Door b1;
		Door b2;
		Door b3;
		cin >> b1 >> b2;
		cout << b1 << " " << b2;
		b3 = b2 + b1;
		cout << b3;
		Door test(a,b,c,color);

		cout<<"вратата е с параметри: "<<test.doorInfo()<<endl;
	    return 0;
}
