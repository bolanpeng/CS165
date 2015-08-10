/******************************************************************
 * This program lets the user set a number that a player tries to 
 * guess, and provides hints for the player. 
******************************************************************/

#include <iostream>

using namespace std;

int main(){
  
  int answer,               // Holds the number the user picks 
      guess,                // Holds the number the player guesses    
      numGuess = 0;          

  cout << "Enter the number for the player to guess." << endl; 
  cin >> answer;

  // Let the player guesses, the program will repeat until the 
  // player guessed the correct answer.    
  do{
    cout << "Enter your guess." << endl;
    cin >> guess;
    numGuess++;

    if(guess < answer) 
      cout << "higher" << endl;
    else if (guess > answer)
      cout << "lower" << endl;
  } while (guess != answer);

  cout << "You guessed it in " << numGuess << " tries." << endl;
 
  return 0;
}
