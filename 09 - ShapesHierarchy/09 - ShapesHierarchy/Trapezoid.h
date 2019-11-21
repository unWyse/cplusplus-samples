//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//TRAPEZOID header
//This header file includes a construtor for a trapezoid object which takes 
//as parameters two Points and two lengths.

#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Quadrilateral.h"

class Trapezoid : public Quadrilateral
{
public:
	//Constructor
	Trapezoid(Point, Point, int, int);
};

#endif
