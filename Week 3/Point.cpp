/*********************************************************************
 * Point class function implementation file.
 * ******************************************************************/

#include <cmath>
#include "Point.hpp"

/********************************************************************
 * Default constructor
 * Initializes both x and y to 0.
 *******************************************************************/
Point::Point(){
  setXCoord(0);
  setYCoord(0);
}

/********************************************************************
 * Constructor that passes the two parameter values to the set 
 * methods to initializes x and y.
 *******************************************************************/
Point::Point(double x, double y){
  setXCoord(x);
  setYCoord(y);
}

/********************************************************************
 * This function sets the value of member variable x.
 *******************************************************************/
void Point::setXCoord(double xCoord){
  x = xCoord; 
}

/********************************************************************
 * This function sets the value of member variable y.
 *******************************************************************/
void Point::setYCoord(double yCoord){
  y = yCoord;
}

/********************************************************************
 * This function returns the value in member variable x.
 *******************************************************************/
double Point::getXCoord(){
  return x;
}

/********************************************************************
 * This function returns the value in member variable y.
 *******************************************************************/
double Point::getYCoord(){
  return y;
}

/********************************************************************
 * This function calculates the distance between the Point that was
 * passed as a parameter and the Point that called the method.
 * The formula is square root of x2-x1 squared plus y2-y1 squared.
 *******************************************************************/
double Point::distanceTo(const Point& pointObj){
  return sqrt(pow(pointObj.x - x, 2) + pow(pointObj.y - y, 2));
}
