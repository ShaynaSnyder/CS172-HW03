#pragma once
#include <string>
#include <iomanip>

using namespace std;
class Fan
{
public:
	int speed;
	bool on;
	//declares double data field that specifies fan radius
	double radius;
	Fan();
	Fan(int newSpeed, bool newOn, double newRadius);


};