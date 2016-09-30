#pragma once
#include <string>
#include <iomanip>
#include "QuadraticEquation.h"

using namespace std;
QuadraticEquation::QuadraticEquation(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
}

int QuadraticEquation::geta()
{
	return a;
}

int QuadraticEquation::getb()
{
	return b;
}

int QuadraticEquation::getc()
{
	return c;
}


double QuadraticEquation::getDiscriminant(int a, int b, int c)
{
	double discriminant;
	discriminant = (b*b) - (4 * a*c);
	return discriminant;
}

double QuadraticEquation::getRoot1(int a, int b, double discriminant)
{
	double r1;
	if (discriminant == 0)
		r1 = 0;
	else
		r1 = (-1 * b + sqrt(discriminant)) / (2 * a);
	return r1;
}

double QuadraticEquation::getRoot2(int a, int b, double discriminant)
{
	double r2;
	if (discriminant == 0)
		r2 = 0;
	else
		r2 = (-1 * b - sqrt(discriminant)) / (2 * a);
	return r2;
}