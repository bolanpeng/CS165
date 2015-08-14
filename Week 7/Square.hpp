/******************************************************************
 * Square class specification file. This class inherits the 
 * Rectangle class.
 *****************************************************************/

#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square:public Rectangle{
  private:
	
  public:
    Square(double);
    void setLength(double);
    void setWidth(double);
};
#endif
