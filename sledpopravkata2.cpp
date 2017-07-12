//============================================================================
// Name        : sledpopravkata2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {

	map <int,int ,less<int> > counters;

	map <int,int> ::iterator it;

    int array []={2,34,23,55,66,1,8,66,66};

    for (int i=0; i < 9 ; i++){
      	int key=array[i];
      	counters.find(key);
      	if(it != counters.end()){
      		counters[key]++;
      	} else{
      		counters[key]=1;
      	}
      }
	return 0;
}
