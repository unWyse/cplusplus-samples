//Kyle Wyse
//16 March 2018
//8th: pp 448-449 #10.8; Integer Set:
//Creates IntegerSet objects and demonstrates operations on them

#include "IntegerSet.h"
#include <iostream>

using namespace std;

int main()
{
	IntegerSet setA;
	int userInput;//reused in both creation an deletion sections. do while loops remove need to reset userInput
	cout << "-------------------------------- SET CREATION ---------------------------------" << endl
		<< "Enter set A one element at a time" << endl
		<< "The range of the set is 0 through 100 (inclusive)" << endl
		<< "Enter -1 when you are done entering set A" << endl;
	do
	{
		cout << "Enter an element: ";
		cin >> userInput;
		if (userInput >= 0 && userInput <= 100) 
			setA.insertElement(userInput);
	} while (userInput != -1);
	cout << endl << "Set A = ";
	setA.printSet();

	IntegerSet setB;
	cout << endl << "Enter set B one element at a time" << endl
		<< "The range of the set is 0 through 100 (inclusive)" << endl
		<< "Enter -1 when you are done entering set B" << endl;
	do
	{
		cout << "Enter an element: ";
		cin >> userInput;
		if (userInput >= 0 && userInput <= 100)
			setB.insertElement(userInput);
	} while (userInput != -1);
	cout << endl << "Set B = ";
	setB.printSet();

	cout << endl << "----------------------------------DELETION------------------------------------" << endl 
		<< "Enter any elements you want to delete from set A one at a time" << endl
		<< "Enter - 1 when you are done deleting from set A" << endl;
	do
	{
		cout << endl << "Set A = ";
		setA.printSet();
		cout << endl << "Enter an element to delete: ";
		cin >> userInput;
		if (userInput >= 0 && userInput <= 100)
			setA.deleteElement(userInput);
	} while (userInput != -1);

	cout << endl << "Enter any elements you want to delete from set B one at a time" << endl
		<< "Enter - 1 when you are done deleting from set B" << endl;
	do
	{
		cout << endl << "Set B = ";
		setB.printSet();
		cout << endl << "Enter an element to delete: ";
		cin >> userInput;
		if (userInput >= 0 && userInput <= 100)
			setB.deleteElement(userInput);
	} while (userInput != -1);

	cout << endl << "-------------------------------- DEMONSTRATION --------------------------------" << endl
		<< "Set A = "; 
	setA.printSet();
	cout << endl << "Set B = ";
	setB.printSet();
	cout << endl << "Intersection of A and B = ";
	setA.intersect(setB).printSet();
	cout << endl << "Union of A and B = ";
	setA.unionize(setB).printSet();
	cout << endl << "Complement of A and B = ";
	setA.complement(setB).printSet();
	cout << endl << "Difference of A and B = ";
	setA.difference(setB).printSet();
	cout << endl << "A is a subset of B: " << setA.subset(setB) << endl // outputs 1 for true or 0 for false
		<< "B is a subset of A: " << setB.subset(setA) << endl
		<< "A is empty: " << setA.isEmpty() << endl
		<< "B is empty: " << setB.isEmpty() << endl
		<< "A and B are equal: " << setA.isEqualTo(setB) << endl;

	cout << endl;
	system("pause");
}