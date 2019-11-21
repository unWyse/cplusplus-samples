//Kyle Wyse
//25 Feb 2018
//8th: pp 411-412 #9.6; Rational Class:
//Demonstates use of the Rational Class to create, modify, and 
//display rational numbers.

/*
Edited by Kyle Wyse
17 Mar 2018
8th: pp 498 #11.10:
Altered code to demonstrate use of operator overloading.
*/


#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational c;
	int num, denom;
	char again = 'Y';
	while (toupper(again) == 'Y')
	{
		again = 'n';
		//get rational numbers from user as numerator
		//and denominator and display simplifed form
		cout << "Rational number A:" << endl
			<< "Enter the numerator " << endl;
		cin >> num;
		cout << "Enter the denominator " << endl;
		cin >> denom;
		Rational a(num, denom);
		cout << num << "/" << denom << " = ";
		a.printFrac();

		cout << endl << "Rational number B:" << endl
			<< "Enter the numerator " << endl;
		cin >> num;
		cout << "Enter the denominator " << endl;
		cin >> denom;
		Rational b(num, denom);
		cout << num << "/" << denom << " = ";
		b.printFrac();

		cout << endl << endl;

		//show addition
		c = a + b;
		cout << a << " + " << b << " = " << c << " or ";
		c.printFloat();
		cout << endl;

		//show subtraction
		c = a - b;
		cout << a << " - " << b << " = " << c << " or ";
		c.printFloat();
		cout << endl;

		//show multiply
		c = a * b;
		cout << a << " * " << b << " = " << c << " or ";
		c.printFloat();
		cout << endl;

		//show divide
		c = a / b;
		cout << a << " / " << b << " = " << c << " or ";
		c.printFloat();
		cout << endl;

		//show multiple operators
		c = (a-b) / (b*a);
		cout << "(" << a << "-" << b << ") / (" << b << "*" << a 
			                           << ") = " << c << " or ";
		c.printFloat();
		cout << endl;

		//show boolean operators
		if (a < b) cout << a << " is less than " << b;
		else cout << a << " is not less than " << b;
		cout << endl;
		if (a <= b) cout << a << " is less than or equal to " << b;
		else cout << a << " is not less than or equal to " << b;
		cout << endl;
		if (a > b) cout << a << " is greater than " << b;
		else cout << a << " is not greater than " << b;
		cout << endl;
		if (a >= b) cout << a << " is greater than or equal to " << b;
		else cout << a << " is not greater than or equal to " << b;
		cout << endl;
		if (a == b) cout << a << " is equal to " << b;
		else if (a != b) cout << a << " is not equal to " << b;
		cout << endl;

		//show unary operators
		cout << a << " negated is " << (-a) << endl;
		cout << "The reciprocal of " << b << " is " << (!b);

		//determine whether to do another test
		cout << endl << "Test more numbers? (Y/N) ";
		cin >> again;

		cout << endl;
	}
	
}