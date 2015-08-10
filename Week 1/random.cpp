/***********************************************
 * This program generates random number based
 * on the range given by the user.
 * ********************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

  //Assign seed to random generator
  unsigned seed = time(0);
  srand(seed);

  //Ask user to input the range
  int min, max;
  std:: cout << "Enter the lower bound: ";
  std:: cin >> min;
  std:: cout << "Enter the upper bound: ";
  std:: cin >> max;

  //Generate the random number with the range 
  int number = rand() % (max-min+1) + min;
  std:: cout << number << std::endl;

  return 0;
}
