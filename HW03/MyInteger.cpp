#pragma once
#include <string>
#include <cstdbool>
#include <iomanip>
#include "MyInteger.h" //includes MyInteger header file
using namespace std;

//constructs default MyInteger object for the value 0
MyInteger::MyInteger()
{
	value = 0;
}
//constructs a MyInteger object using new data
MyInteger::MyInteger(int newValue)
{
	value = newValue;
}
//getValue get function returns the value
int MyInteger::getValue()
{
	return value;
}
//constant functions isEven, isOdd, isPrime return true if value is even, odd, or prime respectively
bool MyInteger::isEven() const
{
	//if remainder is 0 when value is divided by 2, even is true
	if (value % 2 == 0)
		return true;
	else
		return false;
}
bool MyInteger::isOdd() const
{
	//if remainder is 0 when value is divided by 2, odd is false
	if (value % 2 == 0)
		return false;
	else
		return true;
}
bool MyInteger::isPrime() const
{
	//if value is 1 or 2, prime is true
	if (value == 1 || value == 2)
		return true;
	else
	{
		//if value is evenly divisible by a number other than 1 and itself, prime is false
		for (int i = 2; i < value; i++)
		{
			if (value%i == 0)
				return false;
		}
		return true;
	}
}
//constant function equals(int) returns true if value in object is equal to specified value
bool MyInteger::equals() const
{
	if (value == 29)
		return true;
	else
		return false;
}