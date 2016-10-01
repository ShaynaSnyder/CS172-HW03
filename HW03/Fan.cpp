#pragma once
#include <string>
#include <iomanip>
#include "Fan.h" //including Fan header file

using namespace std;

//constructs a default fan object with speed 1, on false, and radius 5
Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
}
//constructs a fan object using new data
Fan::Fan(int newSpeed, bool newOn, double newRadius)
{
	speed = newSpeed;
	on = newOn;
	radius = newRadius;
}