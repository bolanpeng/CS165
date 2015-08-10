/***********************************************************
 * This program takes a Celsius temperature and converts it 
 * to Fahrenheit.
 * ********************************************************/  

#include <iostream>

int main(){

  double cTemp, fTemp;

  std::cout << "Please enter a Celsuis temperature." << std:: endl;
  std::cin >> cTemp;

  fTemp = (9.0/5) * cTemp + 32;
	
  std::cout << fTemp << std::endl;
	
  return 0;	
}
