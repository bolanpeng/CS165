/***********************************************************************
 * Recursive Multiplication
 * 
 * This function accepts two arguments into the parameters x and y. 
 * The function should return the value of x times y. 
 **********************************************************************/

#include <iostream>
using namespace std;

// Function prototype
int multiply(int, int);

int main(){
	int num1, num2;
	
	cout << "Enter 2 numbers and I will multiply them: ";
	cin >> num1 >> num2;
	cout << "Their product is " << multiply(num1, num2) << endl;

	return 0;
}

int multiply(int x, int y){
	// If x is 0 or y is 0, the product will be 0
	if(x==0 || y==0)
		return 0;
		
	// If x is 1, the product will be 1*y, or y itself
	else if(x==1)
		return y;
		
	// Otherwise, return y plus the sum of y, x-1 times
	else
		return multiply(x-1, y) + y;	
}
