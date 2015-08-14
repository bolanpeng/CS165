/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/19/15
 * Description: This is the PreferredProject class specification
 * file. This class inherits from CustomerProject class.
 *****************************************************************/

#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP
#include "CustomerProject.hpp"

class PreferredProject:public CustomerProject{

  public:
    PreferredProject(double, double, double);
    virtual double billAmount();
};
#endif
