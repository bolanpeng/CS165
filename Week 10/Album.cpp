/*********************************************************************
 * Date: 6/1/15
 * Description: This is Album class function implementation file.
 ********************************************************************/

#include "Album.hpp"

Album::Album(std::string idc, std::string t, std::string a)
: LibraryItem(idc, t)  
{
  artist = a;	
}


std::string Album::getArtist(){
  return artist;
}


int Album::getCheckOutLength(){
  return CHECK_OUT_LENGTH;
}
