//============================================================================
// Name        : lecture10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Dog{

private:
	string name;
	int age;
	float weight;
	string breed;

public:
Dog(string dogName,int dogAge,float dogWeight,string dogBreed){
	this->name=dogName;
	this->age=dogAge;
	this->weight=dogWeight;
	this->breed=dogBreed ;
}

 string getName(){
	  return this->name;
  }
 int getAge(){
	 return this->age;
 }
 float getWeight(){
	 return this->weight;
 }
 string getBreed(){
	 return this->breed;
 }

	 void setAge(int newDogAge){
		 this->age=newDogAge;
	 }
	 void setWeight(float newDogWeight){
		 this->weight=newDogWeight;
	 }
	 void setName(string newDogName){
		 this->name=newDogName;
	 }
	 void setBreed(string newDogBreed){
		 this->breed=newDogBreed;
	 }

	 void showInfo(){
		cout << "The Dog info is:"
	    << "Age" << this->age ;
		<<"Name" << this->name
		<<"Weight" << this ->weight
		<<"Breed" << this->breed << endl;
	 }

}; // end of class


int main() {
Dog dog3;
dog3.showinfo();

 Dog dog1("Lassi", 2 , 7.5, "german shepard");

 Dog dog2("Sharko" , 3 , 10 , "pudel");

 dog2.setWeight(22);

 cout <<"Dog name is " <<dog2.getName()<<endl;
 cout <<"Dog breed is" << dog2.getBreed()<< endl;
 cout <<"Dog age is" << dog2.getAge()<<endl;
 cout <<"Dog weight is" << dog2.getWeight() << endl;

	return 0;
}
