#include <iostream>
#include <string>
using namespace std;

class truck{


private:
	string model;
	int kg;
	int fuelConsumation;
	int euroStandart;

public:
	truck(string truckModel, int truckKg, int fuelConsumation, int euroStandart){
		this->model=truckModel;
		this->kg=truckKg;
		this->fuelConsumation=fuelConsumation;
		this-> euroStandart=euroStandart;
	}
	string getModel(){
		return this-> model;
	}
	int getKg(){
		return this->kg;
	}
	int getFuelConsumation(){
		return this->fuelConsumation;
	}
	int getEuroStandart(){
		return this->euroStandart;
	}



};
int main() {
	truck truck1("Scania", 30000, 40, 5);

	cout << " truck model is " << truck1.getModel() << endl;
	cout << " truck kg is " << truck1.getKg() << endl;
	cout << " truck fuel consumation is " << truck1.getFuelConsumation() << endl;
	cout << " truck euro standart is " << truck1.getEuroStandart() << endl;

	return 0;
}

