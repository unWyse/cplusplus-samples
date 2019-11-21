//Kyle Wyse
//16 March 2018
//8th: pp 448-449 #10.8; Integer Set:
//Represents the IntegerSet class and the operations it
//can perform

#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet
{
public:
	//Constructor
	IntegerSet();
	//Set Operations - return new sets 
	IntegerSet intersect(IntegerSet);
	IntegerSet unionize(IntegerSet);
	IntegerSet complement(IntegerSet);
	IntegerSet difference(IntegerSet);
	//Property Methods
	bool subset(IntegerSet);
	bool isEmpty();
	bool isEqualTo(IntegerSet);
	//Set Alteration Methods
	void insertElement(int);
	void deleteElement(int);
	//Print Method
	void printSet();
private:
	//set[index] returns whether 'index' is an element of set
	bool set[101];
};
#endif
