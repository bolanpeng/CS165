/********************************************************************
 * Box class's function implementation file.
 *******************************************************************/

#include "Box.hpp"

/********************************************************************
 * Default constructor
 * Initializes all member variables to 1.
 *******************************************************************/
Box::Box(){
  setHeight(1);
  setWidth(1);
  setLength(1);
}

/********************************************************************
 * Constructor that passes the three parameter values to the set
 * methods to initialize height, width, and length.
 *******************************************************************/
Box::Box(double h, double w, double l){
  setHeight(h);
  setWidth(w);
  setLength(l);
}

/********************************************************************
 * This function sets the value of member variable height.
 *******************************************************************/
void Box::setHeight(double h){
  height = h;
}

/********************************************************************
 * This function sets the value of member variable width.
 *******************************************************************/
void Box::setWidth(double w){
  width = w;
}

/********************************************************************
 * This function sets the value of member variable length.
 *******************************************************************/
void Box::setLength(double l){
  length = l;
}

/********************************************************************
 * This function returns the Volume of the box, computed from 
 * length times width times height.
 *******************************************************************/
double Box::getVolume(){
  return length * width * height;
}

/********************************************************************
 * This function returns the Surface Area of the box, computed from
 * 2lw + 2lh + 2wh
 *******************************************************************/
double Box::getSurfaceArea(){
  return (2*length*width + 2*length*height + 2*width*height);
}
