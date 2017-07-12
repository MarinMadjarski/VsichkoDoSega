//============================================================================
// Name        : bibliotekata.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include "book.h"
#include "avtor.h"

vector<book*> books;
vector<book> otherBooks;

int main() {




	avtor avt1("ivan" , "lainqnov" , 3);
	avtor avt2 ("marin" , "tupakov" ,6);

	book book1(1,"memo" ,"sf",avt1);
	book book2(2"memo2", "sf2",avt2);


	return 0;
}
 void addBooksToVector(book book){
	 for(unsigned int i = 0; i < otherBooks.size(); i++){
	 		if(otherBooks[i].getIsbn() == books[i]->getIsbn()){
	 			return;

	 		}
	 	}
	 otherBooks.push_back(book);
 }
