#include <iostream>
#include "StringList.hpp"

int main(){
	
	StringList list;
	
	list.add("Alice");
	list.add("Chuck");
	list.add("Elaine");
	list.add("Fran");
	
	std::cout << "Here are the initial names:\n";
	//list.displayList();
	std::cout << "\n\n";
	
	int pos = list.positionOf("Danny");
	std::cout << "Position of Danny: " << pos;
	std::cout <<"\n\n";


// Use copy constructor
        StringList newList = list;
	std::cout << "Result of the copy constructor is:\n";
	//newList.displayList();
	std::cout << "\n\n";

// Use setNodeVal function
	if(list.setNodeVal(1, "Benedict")){
		std::cout << "Result of setNodeVal on initial list:\n";
		//list.displayList();
		std::cout <<"\n\n";
	} 
	else
		std::cout << "The position is out of range.\n\n";

// Use getAsVector
	std::vector<std::string> vect;
	vect = newList.getAsVector();
	std::vector<std::string>::iterator iter = vect.begin();
	
	std::cout << "Result of getAsVector on copied list:\n";
	while(iter != vect.end()){
		std::cout << *iter << "    ";
		iter++;
	}
}
