//============================================================================
// Name        : xmlTrening1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Book.h"
using namespace std;



int main() {
	 traverse
	Book::xml_Book doc;
	if (!doc.load_file("Book.xml"))
		return -1;

	Book::xml_node tools = doc.child("Profile").child("Tools");


	// tag::basic[]
	for (Book::xml_node tool = tools.first_child(); tool;
			tool = tool.next_sibling()) {
		std::cout << "Tool:";

		for (Book::xml_attribute attr = tool.first_attribute(); attr;
				attr = attr.next_attribute()) {
			std::cout << " " << attr.name() << "=" << attr.value();
		}

		std::cout << std::endl;
	}
	// end::basic[]

	std::cout << std::endl;

	// tag::data[]
	for (Book::xml_node tool = tools.child("Tool"); tool;
			tool = tool.next_sibling("Tool")) {
		std::cout << "Tool " << tool.attribute("Filename").value();
		std::cout << ": AllowRemote "
				<< tool.attribute("AllowRemote").as_bool();
		std::cout << ", Timeout " << tool.attribute("Timeout").as_int();
		std::cout << ", Description '" << tool.child_value("Description")
				<< "'\n";
		// object creation
		// add to vector/map
	}
	// end::data[]

	std::cout << std::endl;


	return 0;
}
