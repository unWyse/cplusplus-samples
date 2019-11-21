//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//POINT
//This is an auxillary class used by all other classes in the hierarchy.
//It includes a construtor for a Point, represented by two integers, a 
//print method, and getters for the x and y coordinates.

#include "Point.h"

#include <iostream>

//Constructors

Point::Point() { }//this default constructor is useful for defining temporary points

Point::Point(int x, int y)
{
	xCoord = x;
	yCoord = y;
}
//Print medthod

void Point::printPoint()
{
	std::cout << "(" << xCoord << "," << yCoord << ")";
}

//Getters

int Point::getX() 
{
	return xCoord;
}

int Point::getY()
{
	return yCoord;
}

