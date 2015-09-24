/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Book class function implementation file.
 ********************************************************************/

#include "Book.hpp"

Book::Book(std::string idc, std::string t, std::string a)
: LibraryItem(idc, t)  
{
  author = a;	
}


std::string Book::getAuthor(){
  return author;
}


int Book::getCheckOutLength(){
  return CHECK_OUT_LENGTH;
}
