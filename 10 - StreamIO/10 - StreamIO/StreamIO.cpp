//Kyle Wyse
//26 March 2018
//8th: p 630 #15.6; StreamIO:
//Demonstrates a number of ways to manipulate input and output in C++

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//TASK A: left justified & set width
	cout << "Print integer 4444 left justified in a 13 digit field, surrounded by /" << endl 
		<< "/";//slashes not included in field
	cout << left << setw( 13 ) << 4444;
	cout << "/" << endl;

	//TASK B: take first 10 characters of a user input string
	cout << "Interactively input a 15 character string into a 10 character array 'state' and then print 'state'" << endl;
 	char state[11];
	cin.getline(state, 11 );
	cout << state << endl;

	cin.clear();                    //https://stackoverflow.com/questions/257091/how-do-i-flush-the-cin-buffer  
	cin.ignore(INT_MAX, '\n');		//really shouldn't be needed if user follows directions

	//TASK C: showpos & noshowpos
	cout << "Print a variable containing 200 with and without sign on the same line" << endl;
	int num = 200;
	cout << showpos << num << " "
		<< noshowpos << num << endl;

	//TASK D: using base & showbase modifiers
	cout << "Print the decimal value 255 in hexadecimal form preceded by 0x" << endl 
		<< showbase << hex << 255 << dec << noshowbase << endl;

	//TASK E: using a delimeter 
	cout << "Interactively input characters until the character '.' is encountered into array 'charArray' of up to 10 characters" << endl;
	char charArray[11];
	cin.get(charArray, 11, '.');
	cout << charArray << endl;
	/* 
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	*/

	//TASK F: padding/leading zeroes, precision, & rounding by default
	cout << "Print 1.235 in a 9 digit field with 2 decimal places and with leading zeroes" << endl
		<< setw(9) << setprecision(3) << setfill('0') << right << 1.235 << endl;

	system("pause");
}