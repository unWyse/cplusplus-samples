//Kyle Wyse
//25 Feb 2018
//8th: pp 411-412 #9.6; Rational Class:
//Represents a rational number as a numerator and a denominator
//and is able to perform arithmetic operations on them.

/*
Edited by Kyle Wyse
17 Mar 2018
8th: pp 498 #11.10:
==========Added operator overloading for the following==========
Binary operations: add(+), sub(-), mul(*), div(/)
Unary operations: reciprocal(!), and negation(-)
Boolean operations: < <= >= > == =!
Output stream for fractional notation: std::cout << yourRational
*/

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
	//Constructor
	Rational(int=0, int=1);
	//binary operators
	void add(Rational x);
	Rational operator+(Rational x);
	void sub(Rational x);
	Rational operator-(Rational x);
	void mul(Rational x);
	Rational operator*(Rational x);
	void div(Rational x);
	Rational operator/(Rational x);
	//equality operators
	bool operator<(Rational x);
	bool operator<=(Rational x);
	bool operator>(Rational x);
	bool operator>=(Rational x);
	bool operator==(Rational x);
	bool operator!=(Rational x);
	//unary operators
	void reciprocal();
	Rational operator!();//reciprocal
	void negate();
	Rational operator-();
	//output methods 
	void printFloat();
	void printFrac();
	friend std::ostream & operator << (std::ostream &out, const Rational &x);

private:
	int numerator;
	int denominator;
	//helper methods
	void simplify();
	int GCD(int, int);
};

#endif