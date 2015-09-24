/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Library class function implementation 
 * file.
 ********************************************************************/

#include "Library.hpp"

/*********************************************************************
 * Constructor
 * initializes the currentDate to zero
 ********************************************************************/
Library::Library(){
  currentDate = 0;
}


/*********************************************************************
 * addLibraryItem
 * adds an item to the Library's Item List
 ********************************************************************/
void Library::addLibraryItem(LibraryItem* b){
  holdings.push_back(b);
}


/*********************************************************************
 * addPatron
 * adds a person to the Library's Patron List
 ********************************************************************/
void Library::addPatron(Patron* p){
  members.push_back(p);
}


/*********************************************************************
 * checkOutLibraryItem
 * If the item and patron is in the Library's list, the item is not
 * checked out, and not on hold by another patron, then check out the 
 * item. 
 ********************************************************************/ 
std::string Library::checkOutLibraryItem(std::string patronID, 
std::string ItemID){

  LibraryItem *item = getLibraryItem(ItemID);
  Patron *person = getPatron(patronID);
  
  // If item is not in Library's list, return	
  if(item == NULL)
    return "item not found";
	
  // If patron is not in Library's list, return
  if(person == NULL)
    return "patron not found";
	
  // If item is checked out, return
  if(item-> getLocation() == CHECKED_OUT)
    return "item already checked out";
	
  // If the item is on hold but not by this patron, return
  if(item-> getRequestedBy() != NULL && 
     item-> getRequestedBy() != person)
    return "item on hold by other patron";
	
  // Else, check out the item
  item-> setCheckedOutBy(person);
  item-> setDateCheckedOut(currentDate);
  item-> setLocation(CHECKED_OUT);
	
  // If the item is on hold by this patron	
  if(item-> getRequestedBy() == person)
    item-> setRequestedBy(NULL);
		
  // Add the item to the patron's checked out list
  person-> addLibraryItem(item);
		
  return "check out successful";
}
	

/*********************************************************************
 * returnLibraryItem
 * If the item is checked out, return the item to Library.
 ********************************************************************/
std::string Library::returnLibraryItem(std::string ItemID){
LibraryItem *item = getLibraryItem(ItemID);
	
  // If item is not in Library's list, return
  if(item == NULL)
    return "item not found";
			
  // If item is already in the library, return
  if(item-> getLocation() == ON_SHELF || 
     item-> getLocation() == ON_HOLD_SHELF)
    return "item already in library";

  // Else, remove the Library Item from the patron's checked out list
  item-> getCheckedOutBy()-> removeLibraryItem(item);
		
  // If the item is being requested by a patron, move to hold shelf
  if(item-> getRequestedBy() != NULL)
    item-> setLocation(ON_HOLD_SHELF);
  // If the item is not being requested, move to shelf
  else
    item-> setLocation(ON_SHELF);
			
  return "return successful";
}
	
	
/*********************************************************************
 * requestLibraryItem
 * If the item is not requested by another patron, request it.
 ********************************************************************/
std::string Library::requestLibraryItem(std::string patronID, 
std::string ItemID){

  LibraryItem *item = getLibraryItem(ItemID);
  Patron *person = getPatron(patronID);

  // If the item is not in the Library's list, return	
  if(item == NULL)
    return "item not found";
	
  // If the patron is not in the Library's list, return
  if(person == NULL)
    return "patron not found";	
		
  // If the item is requested by another patron, return 
  if(item-> getRequestedBy() != NULL && 
     item-> getRequestedBy() != person)
    return "item on hold by other patron";

  // Else, request the item		
  item-> setRequestedBy(person);
	
  // If the item is on shelf, move to hold shelf	
  if(item-> getLocation() == ON_SHELF)
    item-> setLocation(ON_HOLD_SHELF);
			
  return "request successful";
}


/*********************************************************************
 * payFine
 * Patron pays the amount specified in the parameter.
 ********************************************************************/
std::string Library::payFine(std::string patronID, double payment){
  
  Patron *person = getPatron(patronID);
  
  // If patron is not in Library's list, return	
  if(person == NULL)
    return "patron not found";
		
  // Else, pay the fine, which decreases the fineAmount
  person-> amendFine(-payment);

  return "payment successful";
}


/*********************************************************************
 * incrementCurrentDate
 * Increment current date by 1.
 * Increase each Patron's fines by 10 cents for each overdue item.
 ********************************************************************/
void Library::incrementCurrentDate(){

  currentDate++;

  // For each patron in the Library's list	
  for(int i=0; i<members.size(); i++){
  
  // Scan through their checked out list
    for(int j=0; j<members[i]-> getCheckedOutItems().size(); j++){		
      // If an item's checked out day is greater than the item's 
      // checked out length, increase fine by 10 cent for each day
      if(currentDate - members[i]-> getCheckedOutItems().at(j)-> 
         getDateCheckedOut() > members[i]-> getCheckedOutItems().at(j)->         getCheckOutLength())
        members[i]-> amendFine(.10);
    }
  }
}
    

/*********************************************************************
 * getPatron
 * Scans through the Library's patron list using patron's idNum.
 * If found, return a pointer to the patron.
 * If not, return NULL.
 ********************************************************************/	
Patron* Library::getPatron(std::string patronID){
  for(int i=0; i<members.size(); i++){
    if(members[i]-> getIdNum() == patronID)
      return members[i];		
  }	
  return NULL;
}


/*********************************************************************
 * getLibraryItem
 * Scans through the Library's item list using item's idCode.
 * If found, return a pointer to the item.
 * If not, return NULL.
 ********************************************************************/
LibraryItem* Library::getLibraryItem(std::string ItemID){
  for(int i=0; i<holdings.size(); i++){
    if(holdings[i]-> getIdCode() == ItemID)
      return holdings[i];		
  }	
  return NULL;
}
