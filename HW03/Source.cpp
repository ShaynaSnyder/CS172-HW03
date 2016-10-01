//Name: Shayna Snyder
//Class: CS172-1
//Date: 9/30/16
//Project: HW03

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdbool>
//including header files
#include "Fan.h"
#include "QuadraticEquation.h"
#include "EvenNumber.h"
#include "MyInteger.h"

using namespace std;

int main()
{
	//Exercise 9.2: The Fan class
	//creates 2 Fan objects called fan1 and fan2
	Fan fan1(3, true, 10);
	Fan fan2(2, false, 5);

	//returns the properties of the fan
	cout << "Fan 1\nSpeed: " << fan1.speed << "\nRadius: " << fan1.radius << endl;
	if (fan1.on == 1)
		cout << "On";
	else if(fan1.on == 0)
		cout << "Off";
	cout << "\nFan 2\nSpeed: " << fan2.speed << "\nRadius: " << fan2.radius << endl;
	//uses if statments to output correct information dependent on value of bool variable on
	if (fan2.on == 1)
		cout << "On\n";
	else if (fan2.on == 0)
		cout << "Off\n";

	//Exercise 9.6: Algebra: quadratic equations
	//declaring double variables and prompting the user for their values
	double a1, b1, c1, d1;
	cout << "Enter 'a' value: ";
	cin >> a1;
	cout << "Enter 'b' value: ";
	cin >> b1;
	cout << "Enter 'c' value: ";
	cin >> c1;
	//creates QuadraticEquation object called quadratic1
	QuadraticEquation quadratic1(a1, b1, c1);
	//uses get function to set d1 variable equal to the value of the discriminant
	d1 = quadratic1.getDiscriminant(a1, b1, c1);
	//uses if statements to output correct roots
	//if discriminant is positive, two roots are given
	if (d1 > 0)
		cout << "The roots are: " << quadratic1.getRoot1(a1, b1, d1) << " and " << quadratic1.getRoot2(a1, b1, d1) << endl;
	//if discriminant is 0, one root is given
	else if (d1 == 0)
		cout << "The root is: " << quadratic1.getRoot1(a1, b1, d1) << endl;
	//if discriminant is negative, there are no roots
	else
		cout << "The equation has no real roots" << endl;

	//Exercise 9.11: The EvenNumber class
	//creates EvenNumber object called even1 with value of 16
	EvenNumber even1(16);
	//uses get statements to output value, next, and previous
	cout << "Even number: " << even1.getValue() << endl;
	cout << "Next even number: " << even1.getNext() << endl;
	cout << "Previous even number: " << even1.getPrevious() << endl;

	//Exercise 10.4: Sort characters in a string
	string sort(string& s);
	//prompts user to enter a string s
	string s;
	cout << "Enter a string s: ";
	cin >> s;


	cout << "The sorted string is: ";

	//Exercise 10.10: The MyInteger class


	return 0;
}