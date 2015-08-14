/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/19/15
 * Description: This is the PreferredProject class function
 * implementation file.
 ******************************************************************/

#include "PreferredProject.hpp"

// Constructor that takes three doubles and passes them to the base 
// class constructor.
PreferredProject::PreferredProject(double h, double m, double t):
CustomerProject(h,m,t)
{
}

// Overrides billAmount
double PreferredProject::billAmount(){
  return (0.85*materials) + (0.90*transportation) + 
         (hours<=100 ? 80*hours : 80*100);
}
