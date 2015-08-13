/********************************************************************
 * This program has two functions. One takes a C++ string of '1's 
 * and '0's that are the binary representation of a positive integer, 
 * and return the equivalent int value. The other takes a positive 
 * int value, and return a C++ string of '1's and 0's that are the 
 * binary representation of that number.
 *******************************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/******************************************************************
 * binToDec
 * Converts binary to decimal.
 * Uses the method of 2^n *1 + 2^(n-1) *1 + ... 2^0 *1
 * Ignoring all the zeros in the binary number, because multiplying
 * 0 to another number still equals to 0, which is insignificant
 * in the summation.
 *****************************************************************/
int binToDec(string bin, int pos, int exponent){
  if(pos < bin.length()){
    int sum = 0;
    if(bin[pos] == '1')
      sum = pow(2.0, exponent);
    return binToDec(bin, pos+1, exponent-1) + sum;
  }
}

/******************************************************************
 * Helper Function
 * Adds position and size parameter to the binToDec function.
 *****************************************************************/
int binToDec(string bin){
  int size = bin.length();
  return binToDec(bin, 0, size-1);
}


/******************************************************************
 * decToBin
 * Use short division by two with remainder method.
 * Continue dividing num by 2 until num = 0
 *   1. If there's no remainder, the binary digit is 0
 *   2. If there's a remainder, the binary digit is 1
 * Starting from bottom up, store the binary digits in a string.
 *****************************************************************/
string decToBin(int num){
	
  if(num == 0)
    return "";
  else{
    if(num % 2 == 0)
      return decToBin(num/2) + '0';
    else
      return decToBin(num/2) + '1';
  }
}

/*
int main(){
  string bin = "1001";

  cout << "Binary: " << bin << endl;	
  cout << "Decimal: " << binToDec(bin) << endl;

  int num = 9;
  cout << "Decimal: " << num << endl;
  cout << "Binary: " << decToBin(num) << endl;	
	
  return 0;

}*/
