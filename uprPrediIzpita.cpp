//============================================================================
// Name        : uprPrediIzpita.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

 int countingValues(vector<int> grades , int value)
 {
	int countingValue=0;
	for(int i = 0 ; grades.size(); i ++){
		if(grades.at(i) == value){
			count++;
		}
	}
return count;
}
 void mapForGradesCount(vector<int>, grades){
	 int res2 = countingValues(grades, 2);
	    int res3 = countingValues(grades,3);
	    int res4 = countingValues(grades,4);
	    int res5 = countingValues(grades,5);
	    int res6 = countingValues(grades,6);

	    vector<int> findMostFrequend()

 }

int main() {

	// 3 4 3 4 6 6 5 5 2

	vector<int>grades;
   grades.push_back(3);
   grades.push_back(4);
   grades.push_back(3);
   grades.push_back(4);
   grades.push_back(6);
   grades.push_back(6);
   grades.push_back(5);
   grades.push_back(5);
   grades.push_back(2);

   int res2 = countingValues(grades, 2);
   int res3 = countingValues(grades,3);
   int res4 = countingValues(grades,4);
   int res5 = countingValues(grades,5);
   int res6 = countingValues(grades,6);


   map<string,int> gradesCount;
  // gradesCount[key]==value;
   gradesCount[two] = res2;
   gradesCount[three] = res3;
   gradesCount[four] = res4;
   gradesCount[five] = res5;
   gradesCount[six] = res6;


   map<string , int> :: iterator it;
   for(it = gradesCount.begin(); it != gradesCount.end(); it++){

              //key two         //value 5
	   cout << it->first << " " << it->second << endl;
   }

 // 2 zadacha koq zaplata kolko puti se sreshta;vsqka zaplata
   //kolko dushi sa q vzeli;
   //

   vector<int>salaries;
   int sal[] = {1299, 4550 , 445, 5667 , 888, 4550, 888};
   vector<int> salaries(sal, sal+7); // vmesto push_back;
   map<int,int> salariesCount;

   for(int i = 0 ; i < salaries.size(); i++){
	   int salary = salaries[i];
	   //salary = how many(count)
	   if(salariesCount.find(salary) == salariesCount.end()){
		   salariesCount[salary] = 1;
	   } else {
		   salariesCount[salary]++;
	   }
   }

   map<int , int> :: iterator it;
     for(it = salariesCount.begin(); it != salariesCount.end(); it++){

                //key two         //value 5
  	   cout << it->first << " " << it->second << endl;
     }

 // da se napishe funkiq koqto namira n-te chisla s nai-mn sreshtaniq v dadeniq
     //masiv
     //23 56 77 23 44 55 23 5 8 9 0 77

	return 0;
}
