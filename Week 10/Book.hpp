/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Book class specification file. This class
 * inherits from LibraryItem class.
 ********************************************************************/

#ifndef BOOK_HPP
#define BOOK_HPP

#include "LibraryItem.hpp"

class Book : public LibraryItem{
  private:
   std::string author;
		
  public:
  // public const static member
  static const int CHECK_OUT_LENGTH = 21;	
		
  Book(std::string idc, std::string t, std::string a);
  std::string getAuthor();

  // pure virtual inherited from abstract base class
  int getCheckOutLength();		
};

#endif
