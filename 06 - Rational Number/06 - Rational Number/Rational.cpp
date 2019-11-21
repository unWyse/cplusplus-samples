//Kyle Wyse
//25 Feb 2018
//8th: pp 411-412 #9.6; Rational Class:
//Represents a rational number as a numerator and a denominator
//and is able to perform arithmetic operations on them.
#include <stdexcept>
#include<iostream>

using namespace std;

#include "Rational.h"

//Constructor

Rational::Rational(int n, int d)
{
	numerator = n;
	denominator = d;
	simplify();
	return;
}

Rational::~Rational() { }

//two-address style arithmetic methods

void Rational::add(Rational n)
{
	numerator = numerator * n.denominator + denominator * n.numerator;
	denominator = denominator * n.denominator;
	simplify();
	return;
}

void Rational::sub(Rational n)
{
	/*
	numerator = numerator * n.denominator - denominator * n.numerator;
	denominator = denominator * n.denominator;
	*/
	n.negate();
	add(n);
	simplify();
	return;
}

void Rational::mul(Rational n)
{
	numerator = numerator * n.numerator;
	denominator = denominator * n.denominator;
	simplify();
	return;
}

void Rational::div(Rational n)
{
	/* 
	numerator = numerator * n.denominator;
	denominator = denominator * n.numerator;
	*/
	n.reciprocal();
	mul(n);
	simplify();
	return;
}

//other useful methods

void Rational::reciprocal() 
{
	int temp = numerator;
	numerator = denominator;
	denominator = temp;
	simplify();

}
void Rational::negate()
{
	numerator = -numerator;
	simplify();
}

//output methods

void Rational::printFloat()
{
	cout << (double) numerator / denominator;
	return;
}

void Rational::printFrac()
{
	cout << numerator << "/" << denominator;
	return;
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