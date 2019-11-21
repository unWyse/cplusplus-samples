//Kyle Wyse
//19 Febuary 2018
//8th: pp 367-368 #8.8 a-j; Pointer Fun:
//Demonstrates pointer manipulation actions.

#include <iostream>

//symbolic constant
#define SIZE = 5

using namespace std;

int main()
{
	//objective a: initialize an arrary with the 5 even integers 2 through 10
	unsigned int values[] = { 2,4,6,8,10 };
	cout << "Array declared." << endl;

	//objective b: initialize pointer to type unsigned int
	unsigned int *vPtr;
	cout << "vPtr created." << endl;

	//objective c: print values using array subscript notaion
	cout << "Array values using array-subscript notation: " << endl;
	for (int i = 0; i < 5; i++)
		cout << "    values[" << i << "] = " << values[i] << endl;

	//objective d: both statements assign vPtr = first element of array
	vPtr = values;
	vPtr = &values[0];

	//objective e: print values using pointer-offset notaion
	cout << "Array values using pointer-offset notation: " << endl;
	for (int i = 0; i < 5; i++)
		cout << "    *(vPtr + " << i << ") = " << *(vPtr + i) << endl;

	//objective f: print values using pointer-offset notation using array identifier as the pointer
	cout << "Array values using pointer-offset notation with array identifier as the pointer: " << endl;
	for (int i = 0; i < 5; i++)
		cout << "    *(values + " << i << ") = " << *(values + i) << endl;

	//objective g: print values by subscripting the pointer
	cout << "Array values using pointer-subscript notation: " << endl;
	for (int i = 0; i < 5; i++)
		cout << "    vPtr[" << i << "] = " << vPtr[i] << endl;

	//objective h: print 5th element using various pointer notation methods
	cout << "5th element of array using: " << endl;
	cout << "    array-subscript notation: values[4] = " << values[4] << endl;
	cout << "    pointer-offset w/ array name as the pointer: *(values + 4) = " << *(values + 4) << endl;
	cout << "    pointer-subscript notation: vPtr[4] = " << vPtr[4] << endl;
	cout << "    pointer-offset notation: *(vPtr + 4) = " << *(vPtr + 4) << endl;
	

	//objective i: print the address at vPtr + 3 and the value stored there
	cout << "Address referenced by vPtr + 3: " << vPtr + 3 << endl <<
		"Value at " << vPtr + 3 << ": " << *(vPtr + 3) << "." << endl;

	//objective j: reassign vPtr and use pointer-offset notation
	vPtr = &values[4];
	cout << *(vPtr -= 4) << " is the value referenced by vPtr -= 4 after reassigning the pointer to values[4]" << endl;

	system("pause");
}