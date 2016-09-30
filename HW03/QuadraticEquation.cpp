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


double getDiscriminant(int a, int b, int c)
{
	double discriminant;
	discriminant = (b*b) - (4 * a*c);
	return discriminant;
}

double getRoot1(int a, int b, double discriminant)
{
	double r1;
	r1 = (-1 * b + sqrt(discriminant)) / (2 * a);
	return r1;
}

double getRoot2(int a, int b, double discriminant)
{
	double r2;
	r2 = (-1 * b - sqrt(discriminant)) / (2 * a);
	return r2;
}