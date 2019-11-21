/* 
Name: Kyle Wyse
Project 12
This is the source file for the class Person. It contains the code that defines each method of the class.
*/

#include "Person.h"
 #include <string>


//constructor
Person::Person(int idValue, string lastNameValue,
	string firstNameValue, int ageValue)
{
	setId(idValue);
	setLastName(lastNameValue);
	setFirstName(firstNameValue);
	setAge(ageValue);
}

//setters
void Person::setId(int idValue)
{
	idNumber = idValue;
}

void Person::setLastName(string lastNameString)
{
	// copy at most 15 characters from string to lastName
	int length = lastNameString.size();
	length = (length<15 ? length : 14);
	lastNameString.copy(lastName, length);
	lastName[length] = '\0';     // append null character to lastName
}

void Person::setFirstName(string firstNameString)
{
	// copy at most 10 characters from string to firstName
	int length = firstNameString.size();
	length = (length<10 ? length : 9);
	firstNameString.copy(firstName, length);
	firstName[length] = '\0';      // append null character to firstName
}

void Person::setAge(int ageValue)
{
	age = ageValue;
}

//getters
int Person::getId() const
{
	return idNumber;
}

string Person::getLastName() const
{
	return lastName;
}
string Person::getFirstName() const
{
	return firstName;
}

int Person::getAge() const
{
	return age;
}