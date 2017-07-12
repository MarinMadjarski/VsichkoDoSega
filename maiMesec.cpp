//============================================================================
// Name        : maiMesec.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;
using namespace std;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <cstdlib>
using std::exit; //

int main()
{

   ofstream outClientFile( "maiMesec.txt", ios::out );

   if ( !outClientFile )
   {
      cerr << "File could not be opened" << endl;
      exit( 1 );
   }

   cout << "Enter first name, second name, and balance." << endl
      << "Enter end-of-file to end input.\n? ";

  string firstName;
  string secondName;
  double price;
  double sum;

   while (inFile  >> firstName >> secondName >> balance )
   {
      sum= sum + price;
      prices.push_back(price);
   }

   return 0;
}

