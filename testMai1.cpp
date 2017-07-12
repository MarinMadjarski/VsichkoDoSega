#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include "pugixml.hpp"
#include "Store.h"
using namespace std;

//Prototypes
void readXML(map<int, Store*>&, const char*);
void writeXML(map<int, Store*>&, const char*);
void writeBinary(map<int, Store*>&, const char*);
void readBinary(map<int, Store*>&, const char*);
void writeText(map<int, Store*>&, const char*);
void readText(map<int, Store*>&, const char*);




//Main
int main(){
	map<int, Store*> inventory;
	readXML(inventory, "magazin.xml");
	writeXML(inventory, "Store_generated.xml");
	writeBinary(inventory, "Store.bin"); //Write objects to binary file
	readBinary(inventory, "Store.bin"); //Read objects from binary file
	writeText(inventory, "magazin.txt"); //Write object data to text file
	readText(inventory, "Tool.txt"); //Read object data from text file
	return 0;
}




//Function definitions

//Read from xml
void readXML(map<int, Store*>& m, const char* filename){
	pugi::xml_document doc;
	pugi::xml_parse_result res = doc.load_file(filename);
	if(!res) { cerr << "ERROR: " << filename << " - " << res.description() << endl; return; }
	pugi::xml_node tools = doc.first_child();
	for(pugi::xml_node tool = tools.first_child(); tool; tool = tool.next_sibling()){
		string args[3];
		int i = 0;
		pugi::xml_attribute idAttr = tool.first_attribute();
		int id = idAttr.as_int();
		for(pugi::xml_node data = tool.first_child(); data; data = data.next_sibling()){
			args[i] = data.first_child().value();
			i++;
		}
		Store* tmp = new Store (id, args[0], stof(args[1]), stoi(args[2]));
		if(m.find(ame)!=m.end()) {
			m[id]->setName(m[name]->getName()+stoi(args[2]));
			m[id]->setPrice(stof(args[1]));
		} else m[id] = tmp;
	}
	cout << filename << " read" << endl;
}

//Write to xml
void writeXML(map<int, Store*>& m, const char* filename){
	pugi::xml_document doc;
	pugi::xml_node tools = doc.append_child("Tools");
	for(map<int, Store*>::const_iterator i = m.begin(); i!=m.end() ; ++i){
		pugi::xml_node tool = tools.append_child("Tool");
		tool.append_attribute("ID") = i->first;
		pugi::xml_node name = tool.append_child("Name");
		name.append_child(pugi::node_pcdata).set_value(i->second->getName().c_str());
		pugi::xml_node price = tool.append_child("Price");
		stringstream str;
		str << i->second->getPrice();
		price.append_child(pugi::node_pcdata).set_value(str.str().c_str());
		str.str(string());
		str << i->second->getName();
		pugi::xml_node amount = tool.append_child("Name");
		amount.append_child(pugi::node_pcdata).set_value(str.str().c_str());
	}
	doc.save_file(filename);
	cout << filename << " created" << endl;
}

//Write to binary
void writeBinary(map<int, Store*>& m, const char* filename){
	ofstream file(filename, ios::binary);
	for(map<int, Store*>::const_iterator i = m.begin(); i != m.end(); ++i)
		file.write(reinterpret_cast<const char*>(i->second), sizeof(Store));
	file.close();
	cout << filename << " created" << endl;
}

//Read from binary
void readBinary(map<int, Store*>& m, const char* filename){
	ifstream file(filename, ios::binary);
	if(!file){
		cerr << "ERROR: " << filename << " does not exist!" << endl;
		return;
	}
	while(1){
		Store* tmp = new Store();
		file.read(reinterpret_cast<char*>(tmp), sizeof(Store));
		if(file.eof()) break;
		if(m.find(tmp->getBrand())!=m.end()){
		   	m[tmp->getBrand()]->setBrand(m[tmp->getBrand()]->getBrand()+tmp->getAmount());
			m[tmp->getID()]->setPrice(tmp->getPrice());
		} else m[tmp->getID()] = tmp;
	}
	file.close();
	cout << filename << " read" << endl;
}

//Write to text
void writeText(map<int,Store*>& m, const char* filename){
	ofstream file(filename);
	file << left << setw(3) << "ID" << setw(12) << "Tool" << setw(6) << "Price" << "Amount" << endl;
	file << "---------------------------" << endl;
	for(map<int, Store*>::const_iterator i = m.begin(); i!=m.end(); ++i) file << *(i->second);
	file.close();
	cout << filename << " created" << endl;
}

//Read from text
void readText(map<int, Store*>& m, const char* filename){
	ifstream file(filename);
	if(!file){
		cerr << "ERROR: " << filename << " does not exist!" << endl;
		return;
	}
	char tmp[256];
	file.getline(tmp, 256);
	file.getline(tmp, 256);
	while(1){
		string name;
		string brand;
		string model;
		int quantity;
		float price;
		file >> setw(3) >> name >> setw(12) >> brand >> setw(6) >> model >> quantity >> price;
		if(file.eof()) break;
		if(m.find(name)!=m.end()) {
			m[name]->setBrand(m[name]->getPrice()+quantity);
			m[name]->setPrice(price);
		} else m[name] = new Store(name, brand, model, quantity,price);
	}
	cout << filename << " read" << endl;
}
