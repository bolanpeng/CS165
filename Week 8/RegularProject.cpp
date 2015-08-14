/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/19/15
 * Description: This is the RegularProject class function
 * implementation file.
 *****************************************************************/

#include "RegularProject.hpp"

// Constructor that takes three doubles and passes them to the base 
// class constructor.
RegularProject::RegularProject(double h, double m, double t):
CustomerProject(h,m,t)
{
}

// Overrides billAmount
double RegularProject::billAmount(){
  return materials + transportation + 80*hours;
}
