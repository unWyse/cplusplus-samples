//Kyle Wyse
//22 March 2018
//8th: p 532 #12.8; Class Inheritance: 
//DRIVER
//This class interactively creates and displays four sided shapes 
//as x and y coordinate points

#include "Square.h"//all the others are included with square

#include <iostream>
using namespace std;

Point createPoint()
//used to declare points to be placed in shapes
{
	int x, y;
	cout << "Enter a point (two integers): ";
	cin >> x >> y;
	Point temp(x, y);
	return temp;
}

int main()
{
	//objects declared here to avoid compile errors, redefined in switch statement
	Point point1;//bottom left in square and rectangle
	Point point2;//top left in square and rectangle
	Point point3;//top right in square and rectangle
	Point point4;//bottom right in square and rectangle
	Quadrilateral quad(point1, point2, point3, point4);
	Trapezoid trap(point1, point2, 0, 0);
	Parallelogram para(point1, point2, 0);
	Rectangle rect(point1, 0, 0);
	Square squa(point1, 0);
	int len1 = 0,//also used as height
		len2 = 0;//also used as width

	char selection = 'Y';//used for shape selection and continue prompts
	while (toupper(selection) == 'Y')
	{
		cout << "What shape would you like to create?" << endl
			<< "(P = Parallelogram, Q = Quadrilateral,  R = Rectangle, S = Square, T = Trapezoid)" << endl;
		cin >> selection;

		switch (toupper(selection))
		{
		case('P'):
			cout << endl << "Parallelogram selected." << endl;
			point1 = createPoint();
			point2 = createPoint();
			cout << "Enter a length: ";
			cin >> len1;
			para = Parallelogram(point1, point2, len1);
			cout << endl << "Parallelogram's points: ";
			para.printPoints();
			break;
		case('Q'):
			cout << endl << "Quadrilateral selected." << endl;
			point1 = createPoint();
			point2 = createPoint();
			point3 = createPoint();
			point4 = createPoint();
			quad = Quadrilateral(point1, point2, point3, point4);
			cout << endl << "Quadrilateral's points: ";
			quad.printPoints();
			break;
		case('R'):
			cout << endl << "Rectangle selected." << endl;
			point1 = createPoint();
			cout << "Enter a height: ";
			cin >> len1;
			cout << "Enter a width: ";
			cin >> len2;
			rect = Rectangle(point1, len1, len2);
			cout << "Rectangle's points: ";
			rect.printPoints();
			break;
		case('S'):
			cout << endl << "Square selected." << endl;
			point1 = createPoint();
			cout << "Enter a length: ";
			cin >> len1;
			squa = Square(point1, len1);
			cout << "Square's points: ";
			squa.printPoints();
			break;
		case('T'):
			cout << endl << "Trapezoid selected." << endl;
			point1 = createPoint();
			point2 = createPoint();
			cout << "Enter a length: ";
			cin >> len1;
			cout << "Enter a length: ";
			cin >> len2;
			trap = Trapezoid(point1, point2, len1, len2);
			cout << endl << "Trapezoid's' points: ";
			trap.printPoints();
			break;
		default:
			cout << endl << "Invalid selection." << endl;
		}
		cout << endl << "Would you like to enter another shape? (Y/N)" << endl;
		cin >> selection;
	}
}