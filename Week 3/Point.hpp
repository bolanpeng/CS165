/********************************************************************
 * Point class specification file.
 *******************************************************************/

#ifndef POINT_HPP
#define POINT_HPP


// Point class declaration
class Point{

  private:
    double x;
    double y;

  public:
    Point();
    Point(double, double);	
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord();
    double getYCoord();
    double distanceTo(const Point&);

};

#endif
