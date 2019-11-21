//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//QUADRILATERAL header
//This header file includes a construtor for a quadrilateral object which takes 
//as parameters four Points. This class also contains a print method which can be 
//used by all subclasses and stores the points which are defined in any other shape
//in the hierarchy.

#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Point.h"

class Quadrilateral
{ 
public:
	//Constructor
	Quadrilateral(Point, Point, Point, Point);
	//Print method
	void printPoints();
protected:
	//Four points
	Point pointONE;//bottom left
	Point pointTWO;//top left
	Point pointTHREE;//top right
	Point pointFOUR;//bottom right
	
};

#endif