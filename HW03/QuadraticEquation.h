#pragma once
#include <string>
#include <iomanip>

using namespace std;

class QuadraticEquation
{
public:
	double a, b, c;
	//int geta();
	//int getb();
	//int getc();
	//double getDiscriminant(int a, int b, int c);
	//double getRoot1(double a, double b, double discriminant);
	//double getRoot2(double a, double b, double discriminant);

	double geta()
	{

	}

	double getb()
	{

	}

	double getc()
	{

	}
	
	QuadraticEquation(double a1, double b1, double c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}

	double getDiscriminant(double a, double b, double c)
	{
		double discriminant;
		discriminant = (b*b) - (4 * a*c);
		return discriminant;
	}

	double getRoot1(double a, double b, double discriminant)
	{
		double r1;
		r1 = (-1 * b + sqrt(discriminant)) / (2 * a);
		return r1;
	}

	double getRoot2(double a, double b, double discriminant)
	{
		double r2;
		r2 = (-1 * b - sqrt(discriminant)) / (2 * a);
		return r2;
	}
};