/*********************************************************************
 * This program has a function called hailstone that takes the 
 * starting integer as a parameter and returns how many steps it takes
 * to reach 1.
 ********************************************************************/

#include <iostream>
using namespace std;

/*********************************************************************
 * A hailstone sequence starts with a given integer. If that integer 
 * is even, then you divide it by two to get the next integer in the 
 * sequence, but if it is odd, then you multiply it by three and add 
 * one to get the next integer in the sequence. 
 * Then you use the value you just generated to find out the next 
 * value, according to the same rules.
 ********************************************************************/
int hailstone(int num){
	if(num == 1)
		return 0;
	else{
		if(num % 2 ==0)
			return hailstone(num/2) + 1;
		else
			return hailstone(num*3+1) + 1;
	}
}


int main(){
	
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	cout << "You entered " << num << endl;
	
	if(num % 2 ==0){
		cout << "The number is even, it takes " << hailstone(num) 
			 << " steps to reach 1." << endl;
	}
	else{
		cout << "The number is odd, it takes " << hailstone(num) 
			 << " steps to reach 1." << endl;
	}
	
	return 0;
}
