/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/19/15
 * Description: This is the RegularProject class specification
 * file. This class inherits from CustomerProject class.
 *****************************************************************/

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP
#include "CustomerProject.hpp"

class RegularProject:public CustomerProject{

  public:
    RegularProject(double, double, double);
    virtual double billAmount();
};
#endif
