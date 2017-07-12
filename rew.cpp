#include <iostream>
#include "pugixml.hpp"
#include <map>
#include <vector>

using namespace std;

//Example class for XML operations
class Book{
	public:
		string id, author, title, genre, publish_date, description;
		float price;
		Book(string id, string author, string title,
				string genre, float price,
				string publish_date, string description){
			this->id=id;
			this->author=author;
			this->title=title;
			this->genre=genre;
			this->price=price;
			this->publish_date=publish_date;
			this->description=description;
		}
};

void xml_vectorExample(){
	//XML file structure: every indent is one level down
	//pugi::xml_document doc;
	//doc.load_file("catalog.xml"); - Top level
	//
	//<catalog> == pugi::xml_node catalog = doc.first_child();
	//	<book id="bk110"> == pugi::xml_node book = catalog.first_child():
	//				|
	//				-------> pugi::xml_attribute idAttr = book.first_attribute();
	//						 string id = idAttr.as_string(); - Getting the attribute value
	//
	//		- Traversing nodes on the same level:
	//
	//		<author> == pugi::xml_node data = book.first_child();
	//			O'Brien, Tim -> string author = data.first_child().text.as_string();
	//		</author>
	//
	//		- Moving to next node:
	//
	//		<title> data = data.next_sibling();
	//			Microsoft .NET: The Programming Bible -> string title = data.first_child().text.as_string();
	//		</title>
	//
	//		...
	//
	//	</book>
	//</catalog>

	vector<Book> library; //Vector to hold all books from the .xml

	cout << "- Reading .xml file" << endl;
	pugi::xml_document doc; //Variable to load the .xml into
	doc.load_file("catalog.xml"); //Load the file into
	pugi::xml_node catalog = doc.first_child(); //Going down one level
	for(pugi::xml_node book = catalog.first_child(); book; book = book.next_sibling()){ //Traversing same-level nodes
		pugi::xml_attribute idAttr = book.first_attribute();
		string id = idAttr.as_string(); //Get attribute value

		pugi::xml_node data = book.first_child(); //Node to traverse the book data with
		string author = data.first_child().text().as_string(); //Get data from node
		data = data.next_sibling(); //Move on to next node
		string title = data.first_child().text().as_string();
		data = data.next_sibling();
		string genre = data.first_child().text().as_string();
		data = data.next_sibling();
		float price = data.first_child().text().as_float();
		data = data.next_sibling();
		string publish_date = data.first_child().text().as_string();
		data = data.next_sibling();
		string description = data.first_child().text().as_string();

		Book obj(id, author, title, genre, price, publish_date, description); //Create Book object from read data
		library.push_back(obj); //Push Book object into vector
	}
	cout << "- Traversing vector" << endl;
	for (unsigned i = 0; i < library.size(); i++) {
		cout << "ID: " << library[i].id << endl;
		cout << "Author: " << library[i].author << endl;
		cout << "Title: " << library[i].title << endl;
		cout << "Genre: " << library[i].genre << endl;
		cout << "Price: " << library[i].price << endl;
		cout << "Publish date: " << library[i].publish_date << endl;
		cout << "Description: " << library[i].description << endl;
		cout << endl;
	}

}

void mapExample(){
	//Map declaration: map<key_type, value_type>
	map<string, int> productQuantity;

	//Test data
	string productToAdd[] = {"Toshiba", "Asus", "Samsung", "Toshiba"}; //Key
	int quantity[] = {6, 34, 1, 5}; //Value

	//Add data to the map:
	cout << "Adding data to the map:" << endl;
	for (int i = 0; i < 4; i++) { //Add all the products
		if(productQuantity.find(productToAdd[i])!=productQuantity.end()){  //If the key already exists
			cout << "- " << productToAdd[i] << " already exists" << endl;
			productQuantity[productToAdd[i]]+=quantity[i]; //Add new value to the old
		} else { //If the key doesn't exist
			cout << "- " << productToAdd[i] << " doesn't exist" << endl;
			productQuantity[productToAdd[i]]=quantity[i]; //Initialize new product quantity
		}
	}

	//Traverse map
	cout << "\nTraversing map:" << endl;
	for(map<string, int>::const_iterator i = productQuantity.begin(); i!=productQuantity.end(); ++i){
	//Same as for (int i = 0; i!=size; i++)
		cout << i->first << "-" << i->second << endl; //i->first = key, i->second = value
	}
}


int main(){
	xml_vectorExample();
	mapExample();
	return 0;
}
