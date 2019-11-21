//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//SQUARE
//This class includes a construtor for a square object which takes 
//as parameters a Point and a length. It then calls the constructor
//from its superclass: Rectangle.

#include "Square.h"

Square::Square(Point p, int len)
	: Rectangle(p, len, len) { }