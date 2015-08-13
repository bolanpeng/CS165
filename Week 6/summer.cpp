/******************************************************************
 * This program takes two parameters - an array of doubles and the 
 * size of the array - and returns the sum of the values in the 
 * array.
 *****************************************************************/


double summer(double arr[], int size){
  if(size == 0)
    return 0;
  else
    return arr[size-1]+ summer(arr, size-1);
}

	

