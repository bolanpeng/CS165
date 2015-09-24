/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Movie class function implementation file.
 ********************************************************************/

#include "Movie.hpp"

Movie::Movie(std::string idc, std::string t, std::string d)
: LibraryItem(idc, t) 
{
  director = d;	
}


std::string Movie::getDirector(){
  return director;
}


int Movie::getCheckOutLength(){
  return CHECK_OUT_LENGTH;
}	
