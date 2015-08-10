/********************************************************************
 * LineSegment class function implementation file.
 *******************************************************************/

#include "LineSegment.hpp"

/********************************************************************
 * Constructor that passes two Point parameter values to the set
 * methods and initialize the data members.
 *******************************************************************/
LineSegment::LineSegment(Point p1, Point p2){
  setEnd1(p1.getXCoord(), p1.getYCoord());
  setEnd2(p2.getXCoord(), p2.getYCoord());
}             

/********************************************************************
 * This function sets the value of the member variable end1.
 *******************************************************************/
void LineSegment::setEnd1(double x, double y){
  end1.setXCoord(x);
  end1.setYCoord(y);
} 

/********************************************************************
 * This function sets the value of the member variable end2.
 *******************************************************************/
void LineSegment::setEnd2(double x, double y){
  end2.setXCoord(x);
  end2.setYCoord(y);
}

/********************************************************************
 * This function returns the value in member variable end1.
 *******************************************************************/
Point LineSegment::getEnd1(){
  return end1;
}

/********************************************************************
 * This function returns the value in member variable end2.
 *******************************************************************/
Point LineSegment::getEnd2(){
  return end2;
}

/********************************************************************
 * This function returns the length of the LineSegment.
 *******************************************************************/
double LineSegment::length(){
  return end1.distanceTo(end2);
}	

/********************************************************************
 * This function returns the slope of the LineSegment.
 *******************************************************************/
double LineSegment::slope(){
  double top = end2.getYCoord() - end1.getYCoord();
  double bottom = end2.getXCoord() - end1.getXCoord();
  double slope = top / bottom;
  return slope;
}
