/*****************************************************************
 * This program asks the user to  enter two integers, and then 
 * adds upp all the integers between them (inclusive) and displays
 * the total.
 ****************************************************************/

#include <iostream>

using namespace std;

// Function prototype
void swap(int&, int&);
int sum(int, int);


int main(){
  int x, y;
  
  cout << "This program let you enter two integers, and add up";
  cout << "all the numbers (inclusive)." << endl; 
  cout << "Enter the first number: ";
  cin >> x;
  cout << "Enter the second number: ";
  cin >> y;

  swap(x, y);
 
  cout << "The sum of all the numbers between " << x << " and ";
  cout << y << " is " << sum(x, y) << endl; 

  return 0;
}

// If the first number is not smaller than the second number,
// swap them.
void swap(int& n1, int& n2){
  int temp;

  if(n1 > n2){
    temp = n1;
    n1 = n2;
    n2 = temp;
  }

}

// Add up all the numbers between the first number and the second
// number (inclusive).  
int sum(int n1, int n2){
  int total;
  for(n1; n1<=n2; n1++){
    total += n1;
  } 
  return total;
} 
