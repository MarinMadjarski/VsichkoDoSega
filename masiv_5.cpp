//============================================================================
// Name        : masiv_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float grades[10];
	float sum = 0;

	float count;
	for(int   i = 0; i < 10; i++){
	cout << "enter 30 grades";
	cin >> grades[i];
	}
	for(int i=0; i < 10 ; i++){
	sum=sum+grades[i] / 10 ;
	}
	cout <<"the average sum is" << " " << sum << endl;
	for(int i=0; i < 10 ; i++){
	if(grades[i] > sum)
		count=count +1 ;
	}
    cout<<"the number of students have grades more than average is"<<" " << count << endl;

	return 0;
}
