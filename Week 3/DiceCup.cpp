/********************************************************************
 * DiceCup class: user can choose the number of dice, and number of
 * faces on the dice, and then roll the dice
 ********************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class DiceCup{
	
	private:
		int numDice;
		int numFaces;
	
	public:
		DiceCup();
		DiceCup(int, int);
		void setNumDice(int);
		void setNumFaces(int);
		int rollDice();	
	
};

DiceCup::DiceCup(){
	// Use the time function to get a "seed" value for srand		 
	srand(time(NULL));
	setNumDice(1);
	setNumFaces(2);
}

DiceCup::DiceCup(int d, int f){
	// Use the time function to get a "seed" value for srand		 
	srand(time(NULL));
	setNumDice(d);
	setNumFaces(f);
}

void DiceCup::setNumDice(int d){
	numDice = d;
}

void DiceCup::setNumFaces(int f){
	numFaces = f;
}

int DiceCup::rollDice(){
	int total = 0;

	for(int i=0; i<numDice; i++){
		total += rand()%(numFaces) + 1;
	}
	
	return total;
}


/*****************************main*************************************/

int main(){
	
	int dice, face, rolls;
	
	cout << "Number of dice: ";
	cin >> dice;
	
	cout << "Number of faces: ";
	cin >> face;
	
	DiceCup one(dice, face);
	
	cout << "How many times do you want to roll? ";
	cin >> rolls;
	
	for(int i=0; i<rolls; i++){
		cout << "The total value of the roll " << i+1 << ": "
			 << one.rollDice() << endl;
	}
	
	return 0;
}
