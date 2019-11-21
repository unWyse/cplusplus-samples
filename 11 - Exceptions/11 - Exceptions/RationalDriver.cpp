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

/*
Edited by Kyle Wyse
27 March 2018
Added exception handling for zero as a denominator and division by zero.
*/


#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	Rational a, b, c;//default to 0/1
	int num, denom;
	char again = 'Y';
	while (toupper(again) == 'Y')
	{
		again = 'n';
	//get rational numbers from user as numerator and denominator and display in simplifed form
		cout << "Rational number A:" << endl
			<< "Enter the numerator " << endl;
		cin >> num;
		//try creating a rational until denominator is non-zero, catching error from Rational
		do	
		{
			try 
			{
				cout << "Enter the denominator " << endl;
				cin >> denom;
				a = Rational(num, denom);
				cout << num << "/" << denom << " = ";
			}
			catch (DivideByZeroException)
			{
				cout << "Cannot set denominator to be 0. Please try again" << endl;
			}
		} while (denom == 0);

		a.printFrac();
		cout << endl << "Rational number B:" << endl
			<< "Enter the numerator " << endl;
		cin >> num;
		//try creating second rational until denominator is non-zero, catching error from Rational
		do 
		{
			try 
			{
				cout << "Enter the denominator " << endl;
				cin >> denom;
				b = Rational(num, denom);
				cout << num << "/" << denom << " = ";
			}
			catch (DivideByZeroException)
			{
				cout << "Cannot set denominator to be 0. Please try again" << endl;
			}
		} while (denom == 0);

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

		//show divide (catches division by 0/1)
		cout << a << " / " << b << " = ";
		try	
		{
			c = a / b;
			cout << c << " or ";
			c.printFloat();
		}
		catch (DivideByZeroException)
		{
			cout << "Operation results in denominator of 0." << endl;
		}
		
		cout << endl;

		//show multiple operators (catches division by 0/1)
		cout << "(" << a << "-" << b << ") / (" << b << "*" << a << ") = " ;
		try
		{
			c = (a - b) / (b*a);
			cout << c << " or ";
			c.printFloat();
		}
		catch (DivideByZeroException)
		{
			cout << "Operation results in denominator of 0." << endl;
		}
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
		cout << "The reciprocal of " << b << " is ";
		try//catches reciprocal = n/0
		{
			cout << (!b);
		}
		catch (DivideByZeroException)
		{
			cout << "Operation results in denominator of 0." << endl;
		}

		//determine whether to do another test
		cout << endl << "Test more numbers? (Y/N) ";
		cin >> again;

		cout << endl;
	}

}