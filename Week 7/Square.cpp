/******************************************************************
 * Square class function implementation file.
 *****************************************************************/

#include "Square.hpp"

// Square class constructor takes one parameter, and passes it to
// the Rectangle class constructor
Square::Square(double s):Rectangle(s,s){
}

// Overriding the setLength method from Rectangle class
void Square::setLength(double s){
  Rectangle::setLength(s);
  Rectangle::setWidth(s);
}

// Overriding the setWidth method from Rectangle class
void Square::setWidth(double s){
  Rectangle::setLength(s);
  Rectangle::setWidth(s);
}

