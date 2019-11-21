/* 
Name: Kyle Wyse
Project 12
This is the public header file for the class Person.
It displays the available methods of the class.
A person is defined by an Id number, last name, first name, and age.
*/
#pragma warning(disable:4996) // to avoid warnings about .copy
							  // disabling warnings is not good practice but I'm not 
							  // changing the Person class
#ifndef PERSON_H
#define PERSON_H

#include <string> 
using namespace std;

class Person
{

public:
	//Default constructor
	Person(int = 0, string = "Unassigned" , string = "" , int = 0);

	void setId(int);                //Sets a person&#039;s Id number
	int getId() const;              //Returns a person&#039;s Id number

	void setLastName(string);       //Sets a person&#039;s last name
	string getLastName() const;     //Returns a person&#039;s last name

	void setFirstName(string);      //Sets a person&#039;s first name
	string getFirstName() const;    //Returns a person&#039;s first name

	void setAge(int);               //Sets a person&#039;s age
	int getAge() const;             //Returns a person&#039;s age

private:
	char lastName[15];
	char firstName[10];
	int age;
	int idNumber;

};

#endif