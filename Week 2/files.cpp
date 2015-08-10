/********************************************************************
 * This program reads data from a file, performs some calculation, 
 * and then saves the data to another file.
 * *****************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  
  double number, sum;

  // Define the file stream objects and open the files
  ifstream inputFile("./nums.txt");
  ofstream outputFile("./sum.txt");

  // Check to see if the file was opened correctly
  // If it is, perform calculation on the data
  if(inputFile){
    while(inputFile >> number)
      sum += number; 

    inputFile.close();
  }
  else{
    cout << "Error opening the file." << endl;
  } 

  // Write the sum to the output file
  outputFile << "The sum of the values is " << sum << "." << endl;
  outputFile.close();

  return 0;
}
