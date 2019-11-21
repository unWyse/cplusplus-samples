//Kyle Wyse
//25 Feb 2018
//8th: pp 411-412 #9.6; Rational Class:
//Demonstates use of the Rational Class to create, modify, and 
//display rational numbers.


#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	//code is verbose for clarity of output
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
		c = a;
		c.add(b);
		a.printFrac();
		cout << " + ";
		b.printFrac();
		cout << " = ";
		c.printFrac();
		cout << " = ";
		c.printFloat();
		cout << endl;

		//show subtraction
		c = a;
		c.sub(b);
		a.printFrac();
		cout << " - ";
		b.printFrac();
		cout << " = ";
		c.printFrac();
		cout << " = ";
		c.printFloat();
		cout << endl;

		//show multiply
		c = a;
		c.mul(b);
		a.printFrac();
		cout << " * ";
		b.printFrac();
		cout << " = ";
		c.printFrac();
		cout << " = ";
		c.printFloat();
		cout << endl;

		//show divide
		c = a;
		c.div(b);
		a.printFrac();
		cout << " / ";
		b.printFrac();
		cout << " = ";
		c.printFrac();
		cout << " = ";
		c.printFloat();
		cout << endl;

		//determine whether to do another test
		cout << endl << "Test more numbers? (Y/N) ";
		cin >> again;
	}
	
}