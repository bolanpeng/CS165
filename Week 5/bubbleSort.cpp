/*********************************************************************
 * Modified bubble sort (for integers) so that it counts the number 
 * of swaps and returns it as the value of the function.  Did the 
 * same with selection sort.
 ********************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;


int bubbleSort(int [], int);
int selectionSort(int [], int);

const int SIZE = 100;

int main(){
	// Declares two arrays of 100 ints
	int arr1[SIZE];
	int arr2[SIZE];
	srand(time(0));
	
	// Generates 100 random integers, and store in both arrays
	// Result is two identical arrays
	for(int i=0; i<SIZE; i++){
		arr1[i] = arr2[i] = rand();
	}		
	
	cout << "Number of swaps for Array 1: " << bubbleSort(arr1, SIZE)
		 << endl;
	
	cout << "Number of swaps for Array 2: " << selectionSort(arr2, SIZE)
	     << endl; 
	
	return 0;
}


int bubbleSort(int arr[], int size){
	int temp;
	int numSwap = 0;
	bool swap;
	
	do{
		swap = false;
		for(int i=0; i<size-1; i++){
			if(arr[i] > arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swap = true;
				numSwap++;
			}
		}
	return numSwap;
	} while(swap);
}


int selectionSort(int arr[], int size){
	int startScan,
		minIndex,
		minValue,
		numSwap = 0;
	
	for(startScan = 0; startScan < (size-1); startScan++){
		minIndex = startScan;
		minValue = arr[startScan];
	
		for(int i=startScan+1; i<size; i++){
			if(arr[i] < minValue){
				minValue = arr[i];
				minIndex = i;
				numSwap++;
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
	}
	return numSwap;
}
