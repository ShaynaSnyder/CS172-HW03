#pragma once
#include <string>
#include <iomanip>
#include <cstdbool>
#include <stdio.h>

using namespace std;

//creates MyInteger class
class MyInteger
{
//declares int value as a private variable
private:
	int value;
//declares functions as public
public:
	//creates default MyInteger object
	MyInteger();
	//function for MyInteger using newValue
	MyInteger(int newValue);
	//declares get function int getValue
	int getValue();
	//declares constant bool functions isEven, isOdd, and isPrime
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	//static functions isEven(int), isOdd(int), isPrime(int) that return true if the specified value is even, odd, or prime, respectively
	static bool isEven(int value)
	{
		//if remainder is 0 when value is divided by 2, even is true
		if (value % 2 == 0)
			return true;
		else
			return false;
	}
	static bool isOdd(int value)
	{
		//if remainder is 0 when value is divided by 2, odd is false
		if (value % 2 == 0)
			return false;
		else
			return true;
	}
	static bool isPrime(int value)
	{
		//if value is 1 or 2, prime is true
		if (value == 1 || value == 2)
			return true;
		//if value is evenly divisible by a number other than 1 and itself, prime is false
		for (int x = 2; x < value; x++)
		{
			if (value%x == 0)
				return false;
		}
		return true;
	}
	//declares static bool functions isEven, isOdd, and isPrime
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	//declares constant bool functions equals(int) and equals(const MyIntegers&)
	bool equals(int) const;
	//const equals(const MyIntegers&);
	//declares static bool function parseInt(const string&) that converts string to an int value
	static bool parseInt(const string&);
};