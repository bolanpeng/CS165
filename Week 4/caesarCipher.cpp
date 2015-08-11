/***********************************************************************
 * A Caesar cipher is one in which all letters in the original message
 * are shifted over the same number of spaces in the alphabet (wrapping
 * back around if necessary).  For example, if the original message is 
 * "Hello world.", and the offset is 4, then the enciphered message
 * will be "Lipps asvph."
 **********************************************************************/

#include <iostream>
using namespace std;

// Constant
const int SIZE = 20;

// Function prototype
void encipher(char [], int);

int main(){
	
	char word[SIZE];
	int offset = 4;
	
	cout << "Enter a word or message: ";
	cin.getline(word, SIZE);
	
	cout << "The original message is: " << word << endl;
	
	encipher(word, offset);
	
	return 0;
}
/***********************************************************************
 * Takes a C-string and an offset as parameters.
 * Prints out the enciphered form of the message.
 * Only letters are shifted, but the case of the letters remain the same
 **********************************************************************/
void encipher(char word[], int offset){
	
	for(int i=0; i<SIZE; i++)
	{
		if(isupper(word[i]))
			word[i]= 'A' + (word[i]-'A'+offset) % 26;
		else if(islower(word[i]))
			word[i]= 'a' + (word[i]-'a'+offset) % 26;
	}
	
	cout << "Now the message is:      " << word << endl;
}
	

