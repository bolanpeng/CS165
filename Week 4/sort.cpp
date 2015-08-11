/*****************************************************************
 * This program let the user enter three numbers, and sort them
 * into ascending order.
 ****************************************************************/

#include <iostream>

using namespace std;

// Function prototype
void sort(int&, int&, int&);


int main(){
  
  int num1, num2, num3;

  // Prompt the user for three values
  cout << "Enter three numbers, separated by space: "; 
  cin >> num1 >> num2 >> num3;

  // Print the original numbers on screen
  cout << "original order:" << endl;
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;

  // Sort the numbers
  sort(num1, num2, num3);

  // Print the sorted numbers on screen
  cout << "sorted order:" << endl;
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;

  return 0;   
} 


void sort(int& num1, int& num2, int& num3){
  int temp;

  do{
    if(num1 > num2){
      temp = num1;
      num1 = num2;
      num2 = temp; 
    }
    if(num2 > num3){
      temp = num2;
      num2 = num3;
      num3 = temp; 
    }
  } while (num1 > num2);

}
