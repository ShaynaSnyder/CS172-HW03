#pragma once
#include <string>
#include <iomanip>
#include "EvenNumber.h" //includes EvenNumber header file
using namespace std;

//constructs a default EvenNumber object for the value 0
EvenNumber::EvenNumber()
{
	value = 0;
}
//constructs an EvenNumber object using new data
EvenNumber::EvenNumber(int newValue)
{
	value = newValue;
}
//getValue get function returns the value
int EvenNumber::getValue()
{
	return value;
}
//getNext get function returns the next even number after value
int EvenNumber::getNext()
{
	//declares int variable next and sets it equal to 2 plus the value of value
	int next;
	next = value + 2;
	return next;
}
//getPrevious get function returns the previous even number before value
int EvenNumber::getPrevious()
{
	//declares int variable previous and sets it equal to value minus 2
	int previous;
	previous = value - 2;
	return previous;
}