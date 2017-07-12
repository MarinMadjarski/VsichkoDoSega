//============================================================================
// Name        : jelezariq.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <fstream>
using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cstdlib>
using std::exit;

#include "tools.h"

#include <iostream>
using namespace std;

int enterChoice();
void createTextFile( fstream& );
void updateRecord( fstream& );
void newRecord( fstream& );
void deleteRecord( fstream& );
void outputLine( ostream&, const tools & );
int getAccount( const char * const );

enum Choices { PRINT = 1, UPDATE, NEW, DELETE, END };


int main() {
	  fstream inTool( "tools.dat", ios::in | ios::out );
	   if ( !inTool)
	   {
	      cerr << "File could not be opened." << endl;
	      exit ( 1 );
	   }
	   int choice;
	   while ( ( choice = enterChoice() ) != END )
	   {
	        switch ( choice )
	        {
	           case PRINT:
	              createTextFile( inTool );
	              break;
	           case UPDATE:
	              updateRecord( inTool );
	              break;
	           case NEW:
	              newRecord( inTool );
	              break;
	           case DELETE:
	              deleteRecord( inTool );
	              break;
	           default:
	              cerr << "Incorrect choice" << endl;
	              break;
	        }
	        inTool.clear();
	   }



	return 0;
}
int enterChoice()
{
   // display available options
   cout << "\nEnter your choice" << endl
      << "1 - store a formatted text file of accounts" << endl
      << "    called \"print.txt\" for printing" << endl
      << "2 - update an tool" << endl
      << "3 - add a new tool" << endl
      << "4 - delete an tool" << endl
      << "5 - end program\n? ";

   int menuChoice;
   cin >> menuChoice;
   return menuChoice;
}
void createTextFile( fstream &readFromFile )
{
   // create text file
   ofstream outPrintFile( "print.txt", ios::out );

   // exit program if ofstream cannot create file
   if ( !outPrintFile )
   {
      cerr << "File could not be created." << endl;
      exit( 1 );
   } // end if

   outPrintFile << left << setw( 10 ) << "Account" << setw( 16 )
      << "Last Name" << setw( 11 ) << "First Name" << right
      << setw( 10 ) << "Balance" << endl;


   readFromFile.seekg( 0 );


 tools client;
   readFromFile.read( reinterpret_cast< char * >( &client ),
      sizeof( tools) );


   while ( !readFromFile.eof() )
   {

      if ( client.getDataOfTools() != 0 )
         outputLine( outPrintFile, client );


      readFromFile.read( reinterpret_cast< char * >( &client ),
         sizeof( tools ) );
   }
}


