/***********************************************************************
 * Sphere class 
 **********************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

class Sphere{
	private:
		double radius;
	
	public:
		Sphere();
		Sphere(double);
		void setRadius(double);
		double getRadius();
		double getVolume();
};

Sphere::Sphere(){
	setRadius(0.0);
}

Sphere::Sphere(double r){
	setRadius(r);
}

void Sphere::setRadius(double r){
	radius = r;
}

double Sphere::getRadius(){
	return radius;
}

double Sphere::getVolume(){
	return (3.14159*pow(radius,3.0))*4/3;
}
