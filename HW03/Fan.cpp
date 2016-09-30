#pragma once
#include <string>
#include <iomanip>
#include "Fan.h"

using namespace std;

//constructs a default fan object
Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
}
//constructs a fan object
Fan::Fan(int newSpeed, bool newOn, double newRadius)
{
	speed = newSpeed;
	on = newOn;
	radius = newRadius;
}