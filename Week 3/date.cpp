/********************************************************************
 * Date class: prints user provided date in one of the three formats
 *******************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

class Date{
	private:
		int month;
		int day;
		int year;
	
	public:
		Date();						// Constructor
		Date(int, int, int);
		void setMonth(int);			// Prototype
		void setDay(int);
		void setYear(int);
		void print1();
		void print2();
		void print3();
};	

// Default constructor
Date::Date(){
	setMonth(1);
	setDay(1);
	setYear(2001);
}

// Constructor that takes three parameters to set month, day, year
Date::Date(int m, int d, int y){
	setMonth(m);
	setDay(d);
	setYear(y);
}	

// Set month
void Date::setMonth(int m){
	month = m;
}	

// Set day
void Date::setDay(int d){
	day = d;
}

// Set year
void Date::setYear(int y){
	year = y;
}

// Print the date in mm/dd/yy format
void Date::print1(){
	cout << month << "/" << day << "/" << year << endl;
}	

// Print the date in month day, year format
void Date::print2(){
	cout << month << " " << day << ", " << year << endl;
}

// Print the date in day month year format
void Date::print3(){
	cout << day << " " << month << " " << year << endl;
}


/**************************main********************************/

int main(){
	
	int m, d, y;
	int choice;
	
	cout << "This program displays date in three ways." << endl;
	cout << "Enter a month: ";
	cin >> m;
	cout << "Enter a day: ";
	cin >> d;
	cout << "Enter a year: ";
	cin >> y;
	
	Date chosen(m, d, y);
	
	do{
		// Display the menu and get the users choice
		cout << "\n Choose a print method." << endl;
		cout << "1. Print the date in mm/dd/yy format." << endl;
		cout << "2. Print the date in month day, year format." << endl;
		cout << "3. Print the date in day month year format." << endl;
		cout << "4. Quit the program." << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		
		// Validate the menu selection
		while(choice<1 || choice>4){
			cout << "Please enter 1, 2, 3, or 4: " << endl;
			cin >> choice;
		}
		
		switch(choice){
			case 1: chosen.print1(); break;
			case 2: chosen.print2(); break;
			case 3: chosen.print3(); break;	
		}	
	} while(choice!=4);
	
	return 0;
}
