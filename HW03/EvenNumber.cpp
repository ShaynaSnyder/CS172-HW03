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