//Kyle Wyse
//25 Feb 2018
//8th: pp 411-412 #9.6; Rational Class:
//Represents a rational number as a numerator and a denominator
//and is able to perform arithmetic operations on them.

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
	//Constructor & Destructor
	Rational(int=0, int=1);
	~Rational();
	//two-address style arithmetic methods
	void add(Rational x);
	void sub(Rational x);
	void mul(Rational x);
	void div(Rational x);
	//other useful methods
	void reciprocal();
	void negate();
	//output methods 
	void printFloat();
	void printFrac();

private:
	int numerator;
	int denominator;
	//helper methods
	void simplify();
	int GCD(int, int);
};

#endif