/*********************************************************************
 * This program shuffles the elements in an array into random order.
 ********************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototype
void shuffle(int [], int);

/*********************************************************************
 * User is asked how many integers they want to enter, then the 
 * program will dynamically allocate an array of that many ints, 
 * prompt the user to enter the integers, and store them in the array.  
 * 
 * Next the array is passed to the shuffle function and then print out 
 * the result.  
 * 
 * In the end, the array is deleted to free space.
 ********************************************************************/
int main(){
	
	int num;
	int *ptr;
	
	cout << "How many integers do you want to enter? ";
	cin >> num;
	
	ptr = new int[num];
	
	for(int i=0; i<num; i++){
		cout << "Enter the integer: ";
		cin >> ptr[i];		
	}
	
	cout << "Before Shuffle: " << endl;
	for(int i=0; i<num; i++)
		cout << "num " << i+1 << ": " << ptr[i] << endl;
	
	shuffle(ptr, num);
	
	cout << "After Shuffle: " << endl;
	for(int i=0; i<num; i++)
		cout << "num " << i+1 << ": " << ptr[i] << endl;
	
	delete [] ptr;
	ptr = 0;
	
	return 0;
}

/*********************************************************************
 * Generate a random number each time through the loop, and use the
 * random number to randomly swap two elements.
 ********************************************************************/
void shuffle(int arr[], int size){
	int randomNum, 
	    temp;
	    
	srand(time(0));    
	
	for(int i=0; i<size; i++){
		// Generate a random number from 0 to size-1
		// Which is exactly the range of array indexes
		randomNum = rand() % size;    
		
		temp = arr[i];
		arr[i] = arr[randomNum];
		arr[randomNum] = temp;
	}	
}
