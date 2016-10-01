#pragma once
#include <string>
#include <iomanip>
#include "QuadraticEquation.h" //including QuadraticEquation header file

using namespace std;
//constructs a QuadraticEquation object using the user input data
QuadraticEquation::QuadraticEquation(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

//three get functions for a, b, and c
double QuadraticEquation::geta()
{
	return a;
}

double QuadraticEquation::getb()
{
	return b;
}

double QuadraticEquation::getc()
{
	return c;
}

//function getDiscriminant returns the discriminant (b^2)-4ac
double QuadraticEquation::getDiscriminant(double a, double b, double c)
{
	double discriminant;
	//uses equation to calculate value of the discriminant
	discriminant = (b*b) - (4 * a*c);
	return discriminant;
}

//functions named getRoot1() and getRoot2() returning two roots of the equation
double QuadraticEquation::getRoot1(double a, double b, double discriminant)
{
	double r1;
	//if the discriminant is nonnegative, the root is calculated using the quadratic equation
	if (discriminant >= 0)
		r1 = (-1 * b + sqrt(discriminant)) / (2 * a);
	//if the discriminant is negative, the value of the root is set equal to 0
	else
		r1 = 0;
	return r1;
}

double QuadraticEquation::getRoot2(double a, double b, double discriminant)
{
	double r2;
	//if the discriminant is nonnegative, the root is calculated using the quadratic equation
	if (discriminant >= 0)
		r2 = (-1 * b - sqrt(discriminant)) / (2 * a);
	//if the discriminant is negative, the value of the root is set equal to 0
	else
		r2 = 0;
	return r2;
}