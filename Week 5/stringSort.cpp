/*********************************************************************
 * This program uses Selection Sort to sort an array of strings.
 ********************************************************************/

#include <string>
#include <cctype>
using std::string;

/*********************************************************************
 *stringSort
 *This function scan through the string array, move each string to its
 *appropriate spot, until all the strings have been placed in 
 *alphabetical order.
 ********************************************************************/
void stringSort(string arr[], int size){
  int startScan,          
      minIndex, 
      word;              // Length of the string and size controller
  string minValue;
  bool swap;	         // Flag, indicating a swap of two words

  /******************************************************************
   * This for loop starts scanning from position 0 to the next-to-
   * last array subscript.
   *****************************************************************/
  for(startScan = 0; startScan < (size-1); startScan++){
    minIndex = startScan;
    minValue = arr[startScan];		
		
  /******************************************************************
   * This for loop starts scanning from position 1 to the last array 
   * subscript.
   *****************************************************************/ 
    for(int index = startScan+1; index < size; index++){
	
     /***************************************************************
      * This if/else statement determines the size of the next for 
      * loop. 
      * If the first word is shorter than the second word, the loop
      * size will be as long as the second word.
      * Vice versa.
      **************************************************************/	
      if(minValue.length() < arr[index].length())
		word = arr[index].length();
      else
		word = minValue.length();
				
      swap = false;

     /***************************************************************
      * This for loop look at the two words the program is comparing
      * at the moment, and compare them character by character in
      * their uppercase form.
      * 1. If any character in the first word comes after the second
      *    word in terms of alphabetical order, the second word will 
      *    be temporarily held as the keyword, and use to compare to 
      *    other words in the array. The flag will be set to true, 
      *    and this loop will end.
      * 2. If any character in the first word comes before the second
      *    word in terms of alphabetical order, the first word is
      *    still the keyword. The flag will be set to true, and this
      *    loop will end.
      * 3. If the two characters in comparison is the same, the loop
      *    will continue until there's a difference.
      **************************************************************/ 
      for(int i=0; i<word && !swap; i++){
		if(toupper(minValue.at(i)) > toupper(arr[index].at(i))){
			minValue = arr[index];
			minIndex = index;
			swap = true;
		} else if(toupper(minValue.at(i)) < toupper(arr[index].at(i)))
			swap = true;
		}
	  }

    /****************************************************************
     * After scanning through the array, the keyword is now the
     * smallest in terms of alphabetical order, and is moved to its
     * correct position.
     ***************************************************************/
    arr[minIndex] = arr[startScan];
    arr[startScan] = minValue;
  }
}

