/*********************************************************************
 * Fraction class
 *********************************************************************/


#include <iostream>
using namespace std;

class Fraction{
	
	private:
		int numerator;
		int denominator;
	
	public:
		// Exception class
		class divideByZero
			{};			// Empty class declaration
		
		// Constructor
		Fraction(int, int);
		
		// Member functions
		void setNumerator(int);
		void setDenominator(int);
		
		// Overload * and /
		Fraction operator*(Fraction);
		Fraction operator/(Fraction);
	
		// Overload <<
		friend ostream &operator<<(ostream &out, Fraction f);
};

ostream &operator<<(ostream &out, Fraction f){
	out << f.numerator << "/" << f.denominator;
	return out;
}

Fraction::Fraction(int n, int d){
	setNumerator(n);
	setDenominator(d);	
}

void Fraction::setNumerator(int n){
	numerator = n;
}

void Fraction::setDenominator(int d){
	if(d == 0)
		throw divideByZero();
	else
		denominator = d;
}

Fraction Fraction::operator*(Fraction right){
	return Fraction(this->numerator * right.numerator, 
					this->denominator * right.denominator);
}

Fraction Fraction::operator/(Fraction right){
	return Fraction(this->numerator * right.denominator,
					this->denominator * right.numerator);
}


/*****************************main***********************************/
int main(){
	int num, denom;
	char answer;
	
	try{
		cout << "Enter the values for the numerator and denominator of " 
		     << "fraction 1: ";
		cin >> num >> denom;
		Fraction a(num, denom);
		
		cout << "Enter the values for the numerator and denominator of " 
		     << "fraction 2: ";
		cin >> num >> denom;
		Fraction b(num, denom);
		
		cout << "Do you want to multiply or divide the two fractions "
			 << "(m or d) ? ";
		cin >> answer;
		
		if(answer == 'm')
			cout << "Multiplication: " << a * b << endl;
		if(answer == 'd')
			cout << "Dividison: " << a / b << endl;	
	}
	catch(Fraction::divideByZero){
		cout << "Cannot divide by zero, exiting." << endl;
	}


	return 0;
}
