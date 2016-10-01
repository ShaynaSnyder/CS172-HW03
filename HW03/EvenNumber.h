#pragma once
#include <string>
#include <iomanip>
#include "stdio.h"

using namespace std;

//creates EvenNumber class
class EvenNumber
{
//declares int variable value as private
private:
	int value;
//declares functions as public
public:
	//function for default EvenNumber
	EvenNumber();
	//function for EvenNumber using new values
	EvenNumber(int newValue);
	//declares get functions for the value, the next even number, and the previous even number
	int getValue();
	int getNext();
	int getPrevious();
};