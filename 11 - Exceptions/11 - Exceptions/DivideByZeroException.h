/*
Kyle Wyse
27 March 2018
A simple divide-by-zero exception class to be used by the 
Rational class. The code is from Deitel 8th ed., p 634.
*/

#ifndef DIVIDEBYZEROEXCETION_H
#define DIVIDEBYZEROEXCETION_H
#include <stdexcept>
using namespace std;

class DivideByZeroException : public runtime_error
{
public:
	DivideByZeroException()
		: runtime_error("Divide by zero error. ") { }
};

#endif
