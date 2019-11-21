//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//RECTANGLE header
//This header file includes a construtor for a rectangle object which takes 
//as parameters a Point, a height, and a width.

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	//Constructor
	Rectangle(Point, int, int);
};

#endif