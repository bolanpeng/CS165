/*********************************************************************
 * This program let the user pick the number of values they want to
 * enter, and then displays the smallest and largest of those numbers.
 ********************************************************************/

#include <iostream>

using namespace std;

void rank(double, double&, double&);

int main(){

  int num;                   // Number of values
  double value,              // The value 
         smallest,           // Smallest number
         largest;            // Largest number
 
  cout << "How many numbers do you like to enter? ";
  cin >> num; 

  if(num != 0){
    cout << "Enter a number you like: ";
    cin >> value;
    smallest = largest = value;
    
    // Use a for loop to let them enter the number of values if number
    // is greater than 1.
    // For each value inputed, compare it using the rank function.
    for(int i=1; i<num; i++){
      cout << "Enter a number you like: ";
      cin >> value;
      rank(value, smallest, largest);  
    }  

    // Displays the smallest and largest values.   
    cout << "The smallest number: " << smallest << endl;
    cout << "The largest number: " << largest << endl;
  }
  else{
    cout << "Please enter a number greater than 0." << endl; 
  }

  return 0;

}

// Pass in a copy of the value, and reference to the small and large
// variables.
// Compare the value with the variables 
void rank(double value, double& small, double& large){
  if(value < small)
    small = value;
  else if(value > large)
    large = value; 
} 
