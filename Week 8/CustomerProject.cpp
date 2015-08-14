/******************************************************************
 * Author: Bolan Peng
 * Date: 5/19/15
 * Description: This is the CustomerProject class function
 * implementation file.
 *****************************************************************/

#include "CustomerProject.hpp"

CustomerProject::CustomerProject(double h, double m, double t){
  setHours(h);
  setMaterials(m);
  setTransportation(t);
}

CustomerProject::~CustomerProject(){
}

void CustomerProject::setHours(double h){
  hours = h;
}

void CustomerProject::setMaterials(double m){
  materials = m;
}

void CustomerProject::setTransportation(double t){
  transportation = t;
}

double CustomerProject::getHours(){
  return hours;
}

double CustomerProject::getMaterials(){
  return materials;
}

double CustomerProject::getTransportation(){
  return transportation;
}
