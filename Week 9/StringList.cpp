/*********************************************************************
 * Date: 5/29/15
 * Description: This is the StringList class function implementation
 * file.
 ********************************************************************/

#include "StringList.hpp"

/*********************************************************************
 * Default Constructor
 ********************************************************************/
StringList::StringList(){
  head = NULL;
}


/*********************************************************************
 * Copy Constructor
 ********************************************************************/
StringList::StringList(const StringList &original){
  // Pointer to the original List
  ListNode *ptr = original.head;
 
  // Initialize the new List
  head = NULL;

  // While the original list is not empty, copy value to new list
  while(ptr){
    add(ptr->value);
    ptr = ptr->next;
  }
}


/*********************************************************************
 * Destructor 
 ********************************************************************/
StringList::~StringList(){
  ListNode *ptr = head;
  while(ptr){
    ListNode *garbage = ptr;
    ptr = ptr->next;
    delete garbage;	
  }
}

/*********************************************************************
 * add
 * Adds a new element to the end of the list. 
 ********************************************************************/
void StringList::add(std::string s){
  if(head == NULL)
    head = new ListNode(s);
  else{
    ListNode *ptr = head;
		
    while(ptr->next != NULL)
      ptr = ptr->next;
			 
    ptr->next = new ListNode(s);
  }
}


/*********************************************************************
 * positionOf
 * Returns the position for the first occurrence of the parameter.
 * Or returns -1 if the value is not in the list.
 ********************************************************************/
int StringList::positionOf(std::string s){
  ListNode *ptr = head;
  int pos = -1;
	
  while(ptr){
    if(ptr->value == s){
      pos++; 
      return pos;
    }
    ptr = ptr->next;
    pos++;
  }
  return -1;	
}

/*********************************************************************
 * setNodeVal
 * Sets the value of the node at the position.
 * If position is out of range, return false.
 ********************************************************************/
bool StringList::setNodeVal(int pos, std::string s){
  ListNode *ptr = head;
  int count = 0;
	
  while(ptr){
    if(count == pos){
      ptr->value = s;
      return true;
    }		
    ptr = ptr->next;
    count++;
  }
  return false;
}


/*********************************************************************
 * getAsVector
 * Creates a vector copy of the List.
 ********************************************************************/
std::vector<std::string> StringList::getAsVector(){
  ListNode *ptr = head;
  std::vector<std::string> vec;
	
  while(ptr){
    vec.push_back(ptr->value);
    ptr = ptr->next;
  }	
  return vec;
}


