/*********************************************************************
 * Date: 6/1/15
 * Description: This is the LibraryItem class function implementation
 * file. This is an abstract base class.
 ********************************************************************/

#include "LibraryItem.hpp"

LibraryItem::LibraryItem(std::string idc, std::string t){
  idCode = idc;
  title = t;
  checkedOutBy = NULL;
  requestedBy = NULL;
  setLocation(ON_SHELF);
}


std::string LibraryItem::getIdCode(){
  return idCode;	
}


std::string LibraryItem::getTitle(){
  return title;
}


Locale LibraryItem::getLocation(){
  return location;
}


void LibraryItem::setLocation(Locale l){
  location = l;
}


Patron* LibraryItem::getCheckedOutBy(){
  return checkedOutBy;
}


void LibraryItem::setCheckedOutBy(Patron *p){
  checkedOutBy = p;
}


Patron* LibraryItem::getRequestedBy(){
  return requestedBy;
}


void LibraryItem::setRequestedBy(Patron *p){
  requestedBy = p;
}


int LibraryItem::getDateCheckedOut(){
  return dateCheckedOut;
}

void LibraryItem::setDateCheckedOut(int d){
  dateCheckedOut = d;
}
