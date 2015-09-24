/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Movie class specification file. This class
 * inherits from LibraryItem class.
 ********************************************************************/

#ifndef MOVIE_HPP
#define MOVIE_HPP

#include "LibraryItem.hpp"

class Movie : public LibraryItem{
  private:
    std::string director;
		
  public:
    static const int CHECK_OUT_LENGTH = 7;	
		
    Movie(std::string idc, std::string t, std::string d);
    std::string getDirector();
		
    int getCheckOutLength();	
};

#endif
