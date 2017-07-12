//============================================================================
// Name        : kolite.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<string>
#include <iostream>
using namespace std;

class Cars{
private:
string name;
string model;
int age;
int km;
string color;
float price;

public:
Cars(string carName, string carModel, int carAge, int carKm, string carColor, float carPrice){
this -> name=carName;
this -> model=carModel;
this -> age=carAge;
this -> km= carKm;
this -> color= carColor;
this -> price= carPrice;


}
string getName(){
	return this->name;
	}
string getModel(){
	return this->model;
}
int getAge(){
	return this->age;
}
int getKm(){
	return this ->km;
}
string getColor(){
	return this ->color;
}
float getPrice(){
	return this->price;
}

void setAge(int newCarAge){
	this ->age=newCarAge;
}
void setName(string newCarName){
	this ->name=newCarName;
}
void setModel(float newCarModel){
	this->model=newCarModel;
}
void setKm(int newCarKm){
	this->km=newCarKm;
}
void setColor(string newCarColor){
	this->color=newCarColor;
}
void setPrice(float newCarPrice){
	this->price=newCarPrice;
}
void showInfo(){

	cout<<"the car info is :"
	<<" Name "<< this ->name
	<<" Model "<< this->model
	<<" Age " << this->age
	<<" Km " << this->km
	<<" Color "<< this->color
	<<" Price " << this ->price <<endl;



}
};

int main() {

	Cars car1("Alfa Romeo", "Guilieta",7 ,350,"blue",3000);

	Cars car2("Toyota", "Avensis",9500,6789,"green",5000);

	Cars car3("Suzuki","Swift", 7600,1000,"black",7000);

	cout<<"Car name is " <<car1.getName()<< endl;
	cout<<"Car model is " << car1.getModel()<<endl;
	cout<<"Car age is " << car1.getAge()<<endl;
	cout<<"Car km is " << car1.getKm()<<endl;
	cout<<"Car color is " << car1.getColor()<< endl;
	cout<<"Car price is " << car1.getPrice()<<endl;


	car2.showInfo();
	car3.showInfo();

	return 0;
}
