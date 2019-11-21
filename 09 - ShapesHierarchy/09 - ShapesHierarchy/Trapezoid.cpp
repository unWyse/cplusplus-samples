//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//TRAPEZOID
//This class includes a construtor for a trapezoid object which takes 
//as parameters two Points and two lengths. It then calls the constructor
//from its superclass: Quadrilateral.

#include "Trapezoid.h"

Trapezoid::Trapezoid(Point p1, Point p2, int len1, int len2)
	: Quadrilateral(p1, p2, Point(p2.getX()+len2, p2.getY()), Point(p1.getX()+len1, p1.getY())) { }