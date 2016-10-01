#pragma once
#include <string>
#include <iomanip>
#include <cstdbool>
#include <stdio.h>

using namespace std;

//creates MyInteger class
class MyInteger
{
private:
	int value;
public:
	MyInteger(int newValue);
	int getValue();
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	bool equals(int) const;
	//const equals(const MyIntegers&);
	static bool parseInt(const string&);
};