#pragma once
#include <string>
#include <iomanip>
#include "stdio.h"

using namespace std;

//creates QuadraticEquation class
class QuadraticEquation
{
//declares the values of a, b, and c as private
private:
	double a, b, c;
//functions are made public
public:
	//declares get functions for the values of a, b, and c
	double geta();
	double getb();
	double getc();
	//function for QuadraticEquation using new user input values
	QuadraticEquation(double a1, double b1, double c1);
	//declares get functions for the discriminant and the two roots
	double getDiscriminant(double a, double b, double c);
	double getRoot1(double a, double b, double discriminant);
	double getRoot2(double a, double b, double discriminant);
};