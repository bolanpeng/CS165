/********************************************************************
 * Supply class: user can produce products in a virtual factory
 *******************************************************************/

#include <iostream>
using namespace std;

// Class declaration
class Supplies{
	
	private:
		int thingamajigs;
		int watchamacallits;
		int framistats;
		
	public:
		Supplies();
		Supplies(int, int, int);
		void setNumThingamajigs(int);
		void setNumWatchamacallits(int);
		void setNumFramistats(int);
		void printPartsOrder();
		void produceThing1(int);
		void produceThing2(int);
	
};

// Class implementation
Supplies::Supplies(){
	setNumThingamajigs(100);
	setNumWatchamacallits(70);
	setNumFramistats(50);
}

Supplies::Supplies(int thing, int watch, int fram){
	setNumThingamajigs(thing);
	setNumWatchamacallits(watch);
	setNumFramistats(fram);
}

void Supplies::setNumThingamajigs(int thing){
	thingamajigs = thing;
}

void Supplies::setNumWatchamacallits(int watch){
	watchamacallits = watch;
}

void Supplies::setNumFramistats(int fram){
	framistats = fram;
}
/***********************************************************************
 * Method that will print out how many of each part need to be ordered 
 * to bring what's in stock up to the default amounts 
 **********************************************************************/
void Supplies::printPartsOrder(){
	if(thingamajigs < 100)
		cout << "Order " << 100 - thingamajigs << " thingamajigs" << endl;
	else
		cout << "Has " << thingamajigs << " thingamajigs" << endl;
	
	if(watchamacallits < 70)
		cout << "Order " << 70 - watchamacallits << " watchamacallits" << endl;
	else
		cout << "Has " << watchamacallits << " watchamacallits" << endl;
		
	if(framistats < 50)
		cout << "Order " << 50 - framistats << " framistats" << endl;
	else
		cout << "Has " << framistats << " framistats" << endl;
}

/***********************************************************************
 * Producing a thing1 uses 1 thingamajig, 2 watchamacallits and 1 
 * framistat.
 **********************************************************************/
void Supplies::produceThing1(int num){
	for(int i=0; i<num; i++){
		thingamajigs -= 1;
		watchamacallits -= 1;
		framistats -= 1;
	}
}

/***********************************************************************
 * Producing a thing2 uses 2 thingamajigs and 1 framistat. 
 **********************************************************************/
void Supplies::produceThing2(int num){
	for(int i=0; i<num; i++){
		thingamajigs -= 2;
		framistats -= 1;
	}
}

/********************************main****************************************************/
int main(){
	
	int thing, watch, fram;
	int choice;
	int num;
	
	cout << "How many thingamajigs? ";
	cin >> thing;
	cout << "How many watchamacallits? ";
	cin >> watch;
	cout << "How many framistats? ";
	cin >> fram;
	
	Supplies factory(thing, watch, fram);
	
	do{
		cout << "\nWhat do you want to do?" << endl;
		cout << "1. Produce thing1" << endl;
		cout << "2. Produce thing2" << endl;
		cout << "3. Print a parts order" << endl;
		cout << "4. Quit" << endl;
		cin >> choice;
		
		if(choice<1 || choice>4){
			cout << "Please enter a valid choice." << endl;
			cin >> choice;
		}
		
		switch(choice){
			case 1: 
				cout << "How many do you want to produce? " << endl;
				cin >> num;
				factory.produceThing1(num);
				break;
			case 2:
				cout << "How many do you want to produce? " << endl;
				cin >> num;
				factory.produceThing2(num);
				break;
			case 3:
				factory.printPartsOrder();
				break;
		}
	} while(choice!=4);
	
	
	return 0;
}

