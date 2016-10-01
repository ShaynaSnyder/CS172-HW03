#pragma once
#include <string>
#include <iomanip>

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
};