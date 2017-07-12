//============================================================================
// Name        : trenirovka.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream marinFile;
	marinFile.open("mari.txt");

	marinFile <<"I love Cveti and she loves me" ;
	marinFile.close();
	return 0;
}
