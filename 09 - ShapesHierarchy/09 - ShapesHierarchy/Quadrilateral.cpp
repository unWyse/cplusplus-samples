//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//QUADRILATERAL
//This class includes a construtor for a quadrilateral object which takes 
//as parameters four Points. It also contains a print method which can be 
//used by all subclasses.

#include "Quadrilateral.h"

//Constructor

Quadrilateral::Quadrilateral(Point p1, Point p2, Point p3, Point p4)
{
	pointONE = p1; 
	pointTWO = p2; 
	pointTHREE = p3;
	pointFOUR = p4;
}

//print method

void Quadrilateral::printPoints()
{
	pointONE.printPoint();
	pointTWO.printPoint();
	pointTHREE.printPoint();
	pointFOUR.printPoint();
}