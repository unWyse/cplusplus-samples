//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//PARALLELOGRAM header
//This header file includes a construtor for a parallelogram object which takes 
//as parameters two Points and a length.

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Trapezoid.h"

class Parallelogram : public Trapezoid
{
public:
	//Constructor
	Parallelogram(Point, Point, int);
};

#endif