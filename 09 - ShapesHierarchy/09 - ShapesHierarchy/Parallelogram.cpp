//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//PARALLELOGRAM
//This class includes a construtor for a parallelogram object which takes 
//as parameters two Points and a length. It then calls the constructor
//from its superclass: Trapezoid.

#include "Parallelogram.h"

Parallelogram::Parallelogram(Point p1, Point p2, int len)
	: Trapezoid(p1, p2, len, len) { }