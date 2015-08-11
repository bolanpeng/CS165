/***********************************************************************
 * Dynamic allocation of array
 **********************************************************************/
#include <iostream>  
using namespace std;

// Function prototype
double average(double [], int);


int main(){
	
	int size;			
	double ave;
		
	cout << "How many values do you want to enter? ";
	cin >> size;
	
	// pointer for an array of doubles 
	double *value = new double[size];		
	
	for(int i=0; i<size; i++){
		cout << "Enter: ";
		cin >> value[i];
	}
	
	ave = average(value, size);
	cout << "The average of the values is " << ave << endl;
	
	// Free dynamically allocated memory
	delete [] value;
	value = 0;	
	return 0;
}

/***********************************************************************
 * Pass in the address of the array and its size.
 * Return the average of the array.
 **********************************************************************/
double average(double array[], int size){
	double total = 0.0;
	double ave;
	
	for(int i=0; i<size; i++){
		total += array[i];
	}
	
	ave = total / size;
	
	return ave;
}
