/*************************************************
 * This program asks user to input the number of
 * tickets sold, and displays the amount of income
 * generated from the sales.
 * **********************************************/

#include <iostream>
#include <iomanip>

const double CLASS_A = 15.0;
const double CLASS_B = 12.0;
const double CLASS_C = 9.0;

int main(){

  int aSales, bSales, cSales;
  double income;

  std::cout << "How many tickets were sold for Class A? ";
  std::cin >> aSales;

  std::cout << "How many tickets were sold for Class B? ";
  std::cin >> bSales;

  std::cout << "How many tickets were sold for Class C? ";
  std::cin >> cSales;
 
  income = aSales * CLASS_A + bSales * CLASS_B + cSales * CLASS_C;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "You earned a total of $" << income;
  std::cout << " from ticket sales." << std::endl;          

  return 0;
}
