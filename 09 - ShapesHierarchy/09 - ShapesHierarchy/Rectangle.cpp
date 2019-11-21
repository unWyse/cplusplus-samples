//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//RECTANGLE
//This class includes a construtor for a rectangle object which takes 
//as parameters a Point, a height, and a width. It then calls the 
//constructor from its superclass: Parallelogram.

#include "Rectangle.h"

Rectangle::Rectangle(Point p, int h, int w) 
	: Parallelogram(p, Point(p.getX(), p.getY()+h), w) { }