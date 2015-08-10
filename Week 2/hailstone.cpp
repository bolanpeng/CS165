/********************************************************************
 * This program displays the hailstone sequence for a given integer.
 *******************************************************************/

#include <iostream>

using namespace std;

// Function prototype
int hailstone(int); 

// Test the number
int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num; 
  int step = hailstone(num);
  cout << step << endl;
}

// Calculate the number of steps to reach one
int hailstone(int num){
  int num_steps = 0;
  
  while(num != 1){
    if(num % 2 == 0)
      num = num / 2; 
    else
      num = num * 3 + 1;
    
    num_steps++; 
  }
  return num_steps;
}  
 
