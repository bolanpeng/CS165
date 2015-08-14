/******************************************************************
 * MyInteger class function implementation file.
 *****************************************************************/

#include "MyInteger.hpp"

// Constructor
MyInteger::MyInteger(int num){
  pInteger = new int;
  *pInteger = num;		
}

// Copy Constructor
MyInteger::MyInteger(const MyInteger &obj){
  pInteger = new int;
  *pInteger = *obj.pInteger;	
}

// Destructor
MyInteger::~MyInteger(){
  delete pInteger;	
}

// Overload = operator
MyInteger MyInteger::operator=(const MyInteger &right){
  delete pInteger;
  pInteger = new int;
  *pInteger = *right.pInteger;
  return *this;
}

// Setter
void MyInteger::setMyInt(int num){
  *pInteger = num;
}

// Getter
int MyInteger::getMyInt(){ 		
  return *pInteger;
}

