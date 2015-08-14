/******************************************************************
 * Rectangle class specification file.
 *****************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle{
	
  private:
    double length;
    double width;
	
  public:
    Rectangle(double, double);
    void setLength(double);
    void setWidth(double);
    double area();
    double perimeter();
};
#endif

