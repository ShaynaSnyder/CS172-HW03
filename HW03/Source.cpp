//Name: Shayna Snyder
//Class: CS172-1
//Date: 9/30/16
//Project: HW03

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdbool>
using namespace std;

class Fan
{
public:
	int speed;
	bool on;
	//declares double data field that specifies fan radius
	double radius;
	//construct a default fan object
	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	//construct a fan object
	Fan(int newSpeed, bool newOn, double newRadius)
	{
		speed = newSpeed;
		on = newOn;
		radius = newRadius;
	}
	//return the properties of the fan

};

double getDiscriminant(int a, int b, int c);
double getRoot1(int a, int b, double discriminant);
double getRoot2(int a, int b, double discriminant);

class QuadraticEquation
{
	int a, b, c;
	double discriminant;
	discriminant = getDiscriminant(a, b, c);
	getRoot1(a, b, discriminant);
	getRoot2(a, b, discriminant);
};

double getDiscriminant(int a, int b, int c);
{
	int discriminant;

	return discriminant;
}

double getRoot1(int a, int b, double discriminant)
{
	double root1;

}

double getRoot2(int a, int b, double discriminant)
{
	double root2;

}

int main()
{
	//Exercise 9.2: The Fan class
	Fan fan1(3, true, 10);
	Fan fan2(2, false, 5);

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


	//Exercise 9.11: The EvenNumber class


	//Exercise 10.4: Sort characters in a string


	//Exercise 10.10: The MyInteger class


	return 0;
}