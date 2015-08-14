/******************************************************************
 * Rectangle class function implementation file.
 *****************************************************************/

#include "Rectangle.hpp"

Rectangle::Rectangle(double l, double w){
  setLength(l);
  setWidth(w);	
}

void Rectangle::setLength(double l){
  length = l;
}

void Rectangle::setWidth(double w){
  width = w;
}

double Rectangle::area(){
  return length * width;
}

double Rectangle::perimeter(){
  return 2*length + 2*width;
}

