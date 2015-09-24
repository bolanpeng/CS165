/*********************************************************************
 * Date: 5/29/15
 * Description: This is the StringList class specification file.
 ********************************************************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP

#include <string>
#include <vector>


class StringList{

  protected:
    // List structure
    struct ListNode{
      std::string value;	// data
      ListNode *next;		// points to the next node
      // Constructor
      ListNode(std::string value1, ListNode *next1 = NULL){			
        value = value1;
        next = next1;
      }    
    };
    ListNode *head;	        // List head pointer

  public:
    // Default Constructor
    StringList();   
    // Copy Constructor
    StringList(const StringList &original); 
    // Destructor
    ~StringList();		

    // Member Functions
    void add(std::string);
    int positionOf(std::string);
    bool setNodeVal(int, std::string);
    std::vector<std::string> getAsVector();
};
#endif
