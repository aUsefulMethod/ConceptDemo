#include <iostream>
using namespace std;
#include "Person.h"


void passByValue(int);
void passByRef(int&);
void modifyPerson(Person&);

int main() {

	int num1 = 3;

	int num2;

	int* pNum = &num2;

	*pNum = 5;

	passByValue(num1);

	cout << "the value of num1 in main, after passByValue, is " << num1 << endl;

	passByRef(*pNum);

	cout << " the value of *pNum in main is " << *pNum << endl;

	passByValue(*pNum);

	double* pDouble = new double;

	*pDouble = 40;

	cout << "*pDouble's value is " << *pDouble << endl;

	cout << "*pDouble's memory address is " << pDouble << endl;

	delete pDouble;

	cout << "*pDouble's memory address is " << pDouble << endl;

	Person person;

	cout << "Constructor set Person Object height at " << person.getHeight() << "." << endl;

	person.setAge(45);
	person.setHeight("6' 4\"");
	person.setName("Gary");
	person.setWeight(300);

	cout << "New height after Mutator Method is " << person.getHeight() << "." << endl;

	cout << "This person's attributes are: " << person.getAge() << " years of age. "
		<< "They are " << person.getHeight() << " tall. " << "Their name is " << person.getName()
		<< ", and they weigh " << person.getWeight() << " pounds." << endl;

	modifyPerson(person);

	cout << "You have successfully completed your name change, thank you, " << person.getName() << ".";

}

void passByValue(int passedInt) {

	cout << "we are now in passByValue function" << endl;

	cout << "the current value of num1 is " << passedInt << endl;

	passedInt++;

	cout << "the new value of num1 is " << passedInt << endl;

}

void passByRef(int& passedRefInt) {

	cout << "we are now in the passByRef function" << endl;

	passedRefInt = 50;

	cout << "value of *pNum inside passByRef is " << passedRefInt << endl;

}

void modifyPerson(Person& personObject){

	personObject.setName("Jimothy");

}
