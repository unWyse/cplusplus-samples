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

#include <stdexcept>
#include<iostream>

#include "Rational.h"

//Constructor

Rational::Rational(int n, int d)
{
	numerator = n;
	denominator = d;
	simplify();
	return;
}

//binary operators

void Rational::add(Rational n)
{
	numerator = numerator * n.denominator + denominator * n.numerator;
	denominator = denominator * n.denominator;
	simplify();
	return;
}

Rational Rational::operator+(Rational n) 
{
	Rational temp = *this;
	temp.add(n);
	return temp;
}

void Rational::sub(Rational n)
{
	n.negate();
	add(n);
	simplify();
	return;
}

Rational Rational::operator-(Rational n)
{
	Rational temp = *this;
	temp.sub(n);
	return temp;
}

void Rational::mul(Rational n)
{
	numerator = numerator * n.numerator;
	denominator = denominator * n.denominator;
	simplify();
	return;
}

Rational Rational::operator*(Rational n)
{
	Rational temp = *this;
	temp.mul(n);
	return temp;
}

void Rational::div(Rational n)
{
	n.reciprocal();
	mul(n);
	simplify();
	return;
}

Rational Rational::operator/(Rational n)
{
	Rational temp = *this;
	temp.div(n);
	return temp;
}

//equality operators

bool Rational::operator<(Rational n)
{
	int temp = numerator*n.denominator;
	n.numerator *= denominator;
	return (temp < n.numerator);
}

bool Rational::operator<=(Rational n)
{
	return (*this < n | *this == n);
}

bool Rational::operator>(Rational n)
{
	return !(*this <= n);
}

bool Rational::operator>=(Rational n)
{
	return !(*this < n);
}

bool Rational::operator==(Rational n)
{
	return (numerator == n.numerator && denominator == n.denominator);
}

bool Rational::operator!=(Rational n)
{
	return !(*this == n);
}


//unary operators

void Rational::reciprocal() 
{
	int temp = numerator;
	numerator = denominator;
	denominator = temp;
	simplify();
}

Rational Rational::operator!()
{
	Rational temp = *this;
	temp.reciprocal();
	return temp;
}

void Rational::negate()
{
	numerator = -numerator;
	simplify();
}

Rational Rational::operator-()
{
	Rational temp = *this;
	temp.negate();
	return temp;
}

//output methods

void Rational::printFloat()
{
	std::cout << (double) numerator / denominator;
	return;
}

void Rational::printFrac()
{
	std::cout << numerator << "/" << denominator;
	return;
}

std::ostream & operator << (std::ostream &out, const Rational &n)
//overloads << to print fractions 
//info on how to do this from https://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/ 
{
	out << n.numerator << "/" << n.denominator;
	return out;
}

//helper methods

void Rational::simplify()
{
	//check for divide by zero error
	if (denominator == 0)
		throw "Divide by zero condition";
	//reduce
	int gcd = GCD(numerator, denominator);
	numerator = numerator / gcd;
	denominator = denominator / gcd;
	//fix negatives
	if (denominator < 0) {
		numerator = -numerator;
		denominator = -denominator;
	}
	return;
}

int Rational::GCD(int x, int y)
{
	if (y == 0)	return x;
	else return GCD(y, x%y);
}