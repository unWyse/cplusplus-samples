//Kyle Wyse
//16 March 2018
//8th: pp 448-449 #10.8; Integer Set:
//Represents a set of integers in the range 1 through 100
//and can perform set operations on them

//Lines commented "ALT CODE" are valid (but inefficient) 
//replacements for the methods they are in. They remove the 
//need for if statements and accomplish their goal in one
//line, but require the creation of temporary null sets,
//costing more time and space.

#include "IntegerSet.h"
#include <iostream>


//Constructor

IntegerSet::IntegerSet()
//create a new IntegerSet w/ no elements
{
	for (int i = 0; i < 101; i++)
		set[i] = false;
	return;
}

//Set Operation Methods

IntegerSet IntegerSet::intersect(IntegerSet a) 
// called by setC = setA.intersect(setB);
{
	for (int i = 0; i < 101; i++)
		a.set[i] = a.set[i] & set[i];
	return a;
}
IntegerSet IntegerSet::unionize(IntegerSet a) //union
//similar to intersect()
{
	for (int i = 0; i < 101; i++)
		a.set[i] = a.set[i] | set[i];
	return a;
}

IntegerSet IntegerSet::complement(IntegerSet a)
//returns the complement of the union of two sets
{
	a = unionize(a);
	for (int i = 0; i < 101; i++)
		a.set[i] = !a.set[i];
	return a;
}

IntegerSet IntegerSet::difference(IntegerSet a)
//similar to intersect()
//Set1.difference(Set2)  -->  Set1 - Set2 (non arithmetic)
{
	return intersect(complement(intersect(a)));
}

//Property Methods

bool IntegerSet::subset(IntegerSet a)//i.e. subsetOF()
//called by if(setA.subset(setB)
{
	//return difference(a).isEqualTo(IntegerSet()); //ALT CODE
	for (int i = 0; i < 101; i++)
		if (set[i] && !a.set[i])
			return false;
	return true;
}
bool IntegerSet::isEmpty() 
{
	//return isEqualTo(IntegerSet()); //ALT CODE
	for (int i = 0; i < 101; i++)
		if (set[i])
			return false;
	return true;
}

bool IntegerSet::isEqualTo(IntegerSet a)
{
	for (int i = 0; i < 101; i++)
		if (set[i] != a.set[i])
			return false;
	return true;
}

//Set Alteration Methods

void IntegerSet::insertElement(int k)
//called by setA.insertElement(k)
{
	set[k] = true;
	return;
}

void IntegerSet::deleteElement(int k)
{
	set[k] = false;
	return;
}

//Print Method

void IntegerSet::printSet() 
//nullSet.printSet(); outputs { }
{
	std::cout << "{ ";
	for (int i = 0; i < 101; i++)
		if(set[i])
			std::cout << i << " ";
	
	std::cout << "} ";
	return;
}