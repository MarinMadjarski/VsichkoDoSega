/*
 * Store.cpp
 *
 *  Created on: 31.05.2017 ã.
 *      Author: user
 */

#include "Store.h"



Store::~Store() {
	// TODO Auto-generated destructor stub
}

const vector<Product*>& Store::getSales() const {
	return sales;
}

void Store::setSales(const vector<Product*>& sales) {
	this->sales = sales;
}

float Store::getTotal() const {
	return total;
}

Store::Store(const char* filename) {
	this->total=0;
	readXML(filename);
}

void Store::setTotal(float total) {
	this->total = total;
}

void Store::readXML(const char* fileName) {	pugi::xml_document doc;
if (!doc.load_file("xgconsole.xml"))
	cerr<<"error";

pugi::xml_node tools = doc.child("Profile").child("Tools");



for (pugi::xml_node tool = tools.first_child(); tool;
		tool = tool.next_sibling()) {
	std::cout << "Tool:";

	for (pugi::xml_attribute attr = tool.first_attribute(); attr;
			attr = attr.next_attribute()) {
		std::cout << " " << attr.name() << "=" << attr.value();
	}

	std::cout << std::endl;
}


std::cout << std::endl;


for (pugi::xml_node tool = tools.child("Tool"); tool;
		tool = tool.next_sibling("Tool")) {
	std::cout << "Tool " << tool.attribute("Filename").value();
	std::cout << ": AllowRemote "
			<< tool.attribute("AllowRemote").as_bool();
	std::cout << ", Timeout " << tool.attribute("Timeout").as_int();
	std::cout << ", Description '" << tool.child_value("Description")
			<< "'\n";


}


std::cout << std::endl;



}



bool operator<(const Store& l, const Store& r){
	return l.total<r.total;
}

ostream& operator<<(ostream& os, const Store& obj){
	for(unsigned i=0; i < obj.sales.size(); i++){
		os << *obj.sales[i];
	    os <<"Total:"<< obj.total << endl;
	}
	    return os;
}




