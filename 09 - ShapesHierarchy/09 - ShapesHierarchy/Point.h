//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//POINT header
//This is an auxillary class used by all other classes in the hierarchy.
//It includes a construtor for a Point, represented by two integers, a 
//print method, and getters for the x and y coordinates, which it stores
//as private members.

#ifndef POINT_H
#define POINT_H

class Point
{
public:
	//Constructors
	Point();
	Point(int, int);

	//Print method
	void printPoint();

	//Getters
	int getX();
	int getY();

private:
	//the coordinates
	int xCoord;
	int yCoord;
};

#endif