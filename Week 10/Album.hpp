/*********************************************************************
 * Date: 6/1/15
 * Description: This is the Album class specification file. This class
 * inherits from LibraryItem class.
 ********************************************************************/


#ifndef ALBUM_HPP
#define ALBUM_HPP

#include "LibraryItem.hpp"

class Album : public LibraryItem{
  private:
    std::string artist;
		
  public:
    static const int CHECK_OUT_LENGTH = 14;	
		
    Album(std::string idc, std::string t, std::string a);
    std::string getArtist();
		
    int getCheckOutLength();		
};

#endif
