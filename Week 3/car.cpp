/********************************************************************
 * Car class: user can accelerate, brake, or quit
 *******************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Car{
	
	private:
		int year;
		string make;
		int speed;
	
	public:
		Car();
		Car(int, string);
		void setYear(int);
		void setMake(string);
		void setSpeed(int);
		int getSpeed();
		void accelerate();
		void brake();
	
};

// Car class implementation code
Car::Car(){
	setYear(0);
	setMake("");
	setSpeed(0);
}

Car::Car(int y, string m){
	setYear(y);
	setMake(m);
	setSpeed(0);
}

void Car::setYear(int y){
	year = y;
}

void Car::setMake(string m){
	make = m;
}

void Car::setSpeed(int s){
	speed = s;
}

int Car::getSpeed(){
	return speed;
}

void Car::accelerate(){
	setSpeed(getSpeed()+10);
	if(speed > 80){
		setSpeed(80);
		cout << "Ooops, you are going over the speed limit of 80mph, "
		        "slow down." << endl;
	}
}

void Car::brake(){
	setSpeed(getSpeed()-10);
	if(speed < 0){
		setSpeed(0);
		cout << "You are already stopped." << endl;
	}
}


/******************************main*******************************/

int main(){
	
	int year, choice;
	string make;
	
	cout << "Pick your dream car." << endl;
	cout << "What year? ";
	cin >> year;
	cout << "What make? ";
	cin.get();                 // To get past the last '\n' in the buffer
	getline(cin, make);        // Store the string in make
	
	Car dreamCar(year, make);
	
	do{
		cout << "What do you want to do with your car?" << endl;
		cout << "1. Accelerate" << endl;
		cout << "2. Brake" << endl;
		cout << "3. Bye" << endl;
		cin >> choice;
	
		while(choice<1 || choice>3){
			cout << "Please select a valid choice." << endl;
			cin >> choice;
		}
		
		if(choice == 1)
			dreamCar.accelerate();
		else if(choice == 2)
			dreamCar.brake();
		cout << "The speed is " << dreamCar.getSpeed() << " mph." << endl;
	} while(choice!=3);
	return 0;
}
