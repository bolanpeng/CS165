/*******************************************************************
 * Write a class called Zombie. It should have a method called 
 * speak() that prints "Braaaainss!". It should have a static 
 * variable that keeps track of how many Zombie objects have been 
 * created. When a Zombie is created, its constructor will need to 
 * increment the value in the static variable. In order to keep 
 * the count accurate when Zombies are destroyed, you will need a 
 * destructor to decrement the value in the static variable.
 ******************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Zombie{
	public:
		static int numOfZombies;    // Declaration
		Zombie();
		~Zombie();
		void speak();	
};


// Definition of the static member of the Zombie class
int Zombie::numOfZombies=0;   


// Constructor: increment the value in the static variable
Zombie::Zombie(){
	numOfZombies++;
}

// Destructor: decrement the value in the stactic variable
Zombie::~Zombie(){
	numOfZombies--;
}

void Zombie::speak(){
	cout << "Braaaainss!" << endl << endl;
}


/***************************main***********************************
 * Users have the option to: 
 *   1) create a new Zombie; 
 *   2) destroy a Zombie; 
 *   3) print the number of existing Zombies; 
 *   4) tell all existing Zombies to speak; or 
 *   5) quit.  
 ******************************************************************/
 
int main(){
	
	// a vector containing pointer to Zombie objects
	vector<Zombie *> zPtr;
	int choice;
	
	do{
		cout << " Welcome to Zombie World" << endl;
		cout << " ----------------------- " << endl;
		cout << " 1. create a new Zombie" << endl;
		cout << " 2. destroy a Zombie" << endl;
		cout << " 3. print the number of existing Zombies" << endl;
		cout << " 4. tell all exisiting Zombies to speak" << endl;
		cout << " 5. quit" << endl;
		cin >> choice;
		
		switch(choice){
			case 1: 
				zPtr.push_back(new Zombie);
				cout << "You created a Zombie." << endl << endl;
				break;
			case 2:
				delete zPtr.back();
				zPtr.pop_back();
				cout << "You destroyed a Zombie." << endl << endl;
				break;
			case 3:
				cout << "Number of existing Zombies: " 
					 << zPtr[0]->numOfZombies << endl << endl;
				break;
			case 4: 
				for(unsigned int i=0; i<zPtr.size(); i++)
					zPtr[i]->speak();
				break;
		}
	
	} while(choice!=5);
	
	
	return 0;
}
