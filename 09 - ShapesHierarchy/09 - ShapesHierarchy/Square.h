//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//SQUARE header
//This header file includes a construtor for a square object which takes 
//as parameters a Point and a length.

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle
{
public:
	//Constructor
	Square(Point, int);
};

#endif
