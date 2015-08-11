/****************************************************************
 * This program finds the mode in an array, if multiple values 
 * tie, it will return all the values. 
 ***************************************************************/

#include <vector>
#include <algorithm>
using namespace std;

/****************************************************************
 *                     findMode:
 * Takes in an array and its size as parameters.
 * Return a vector containing all the possible modes.
 * If there's no mode, it will return all the values.
 ***************************************************************/
vector<int> findMode(int array[], int size){
  int count = 0;
  int max = 0;
  vector<int> mode;

  // Sort the array in ascending order
  sort(array, array+size);

  /**************************************************************
   * 1. Scan through the sorted array
   * 2. If the value at i is equal to i+1, count+1
   *    a. If count > max, set max = count, clear the vector, 
   *       and store the value at i as the mode
   *    b. If count = max, there is more than 1 mode, store
   *       the other modes following the first in the vector
   * 3. If the value at i is not equal to i+1, clear count. 
   *************************************************************/
  for(int i=0; i<size; i++){
    if(array[i] == array[i+1]){
      count++;
        if(count > max){
          max = count;
          mode.clear();
          mode.push_back(array[i]);
        }
        else if(count == max){
          mode.push_back(array[i]);
        }
    }
    else{
      count = 0;
    }    
  }

  // If the vector is empty, there's no mode in this array
  // Store the whole sorted array into the vector
  if(mode.empty()){
    for(int i=0; i<size; i++)
      mode.push_back(array[i]);
  }  
  
  return mode;
}
