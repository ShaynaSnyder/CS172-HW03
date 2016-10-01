#pragma once
#include <string>
#include <iomanip>

using namespace std;
//creates Fan class
class Fan
{
//declares variables as public
public:
	//int data field specifies fan speed
	int speed;
	//bool data field specifies whether the fan is on
	bool on;
	//declares double data field that specifies fan radius
	double radius;
	//function for default Fan object
	Fan();
	//function for Fan using new values
	Fan(int newSpeed, bool newOn, double newRadius);
};