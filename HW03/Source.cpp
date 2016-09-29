//Name: Shayna Snyder
//Class: CS172-1
//Date: 9/30/16
//Project: HW03

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdbool>
#include "QuadraticEquation.h"
using namespace std;

class Fan
{
public:
	int speed;
	bool on;
	//declares double data field that specifies fan radius
	double radius;
	//constructs a default fan object
	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	//constructs a fan object
	Fan(int newSpeed, bool newOn, double newRadius)
	{
		speed = newSpeed;
		on = newOn;
		radius = newRadius;
	}
};

int main()
{
	//Exercise 9.2: The Fan class
	Fan fan1(3, true, 10);
	Fan fan2(2, false, 5);

	//returns the properties of the fan
	cout << "Fan 1\nSpeed: " << fan1.speed << "\nRadius: " << fan1.radius << endl;
	if (fan1.on == 1)
		cout << "On";
	else if(fan1.on == 0)
		cout << "Off";
	cout << "\nFan 2\nSpeed: " << fan2.speed << "\nRadius: " << fan2.radius << endl;
	if (fan2.on == 1)
		cout << "On\n";
	else if (fan2.on == 0)
		cout << "Off\n";

	//Exercise 9.6: Algebra: quadratic equations
	double a1, b1, c1;
	cout << "Enter 'a' value: ";
	cin >> a1;
	cout << "Enter 'b' value: ";
	cin >> b1;
	cout << "Enter 'c' value: ";
	cin >> c1;
	QuadraticEquation quadratic1(a1, b1, c1);

	//Exercise 9.11: The EvenNumber class


	//Exercise 10.4: Sort characters in a string


	//Exercise 10.10: The MyInteger class


	return 0;
}