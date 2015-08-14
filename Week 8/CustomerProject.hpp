/*******************************************************************
 * Author: Bolan Peng
 * Date: 5/19/15
 * Description: This is the CustomerProject class specification
 * file. This is an abstract base class.
 ******************************************************************/

#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

class CustomerProject{
	
  protected:
    double hours;	        // the number of hours the project took
    double materials;	        // the cost of materials
    double transportation;	// tranpostation costs
	
  public:
    CustomerProject(double, double, double);
    ~CustomerProject();
    void setHours(double);
    void setMaterials(double);
    void setTransportation(double);
    double getHours();
    double getMaterials();
    double getTransportation();
    virtual double billAmount() = 0;	   // pure virtual function
};
#endif
