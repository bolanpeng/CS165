/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Patron class function implementation file.
 ********************************************************************/

#include "Patron.hpp"
#include <algorithm>

Patron::Patron(std::string idn, std::string n){
  idNum = idn;
  name = n;
  fineAmount = 0;
}


std::string Patron::getIdNum(){
  return idNum;
}


std::string Patron::getName(){
  return name;
}


std::vector<LibraryItem*> Patron::getCheckedOutItems(){
  return checkedOutItems;
}


void Patron::addLibraryItem(LibraryItem* b){
  checkedOutItems.push_back(b);
}


/*********************************************************************
 * Find the LibraryItem in the Patron's checked out list.
 * If the item is found, remove the item from the list.
 ********************************************************************/
void Patron::removeLibraryItem(LibraryItem* b){
  std::vector<LibraryItem*>::iterator iter;
	
  iter = find(checkedOutItems.begin(), checkedOutItems.end(), b);
	
  if(iter != checkedOutItems.end())
    checkedOutItems.erase(iter);
}


double Patron::getFineAmount(){
  return fineAmount;
}


void Patron::amendFine(double amount){
  fineAmount += amount;
}
