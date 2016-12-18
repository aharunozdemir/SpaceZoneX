#ifndef CAPSULE_H
#define CAPSULE_H

#include "console.h"
#include "coordinate.h"
//#include "MovingObjects.h"


class Capsule
{
	COORDINATE Base;
	int Speed;
	int SpeedCounter;
	int color;
	int Length;
public:

	Capsule(COORDINATE BaseIn, int SpeedIn, int colorIn, int LengthIn)
		: Base(BaseIn), Speed(SpeedIn), color(colorIn), Length(LengthIn), SpeedCounter(0)
	{
	}
	bool IsDead();

	void Draw(Console& c, char ch, int color);
	void Draw(Console& c);

	void Erase(Console& c);

	bool TimeIsUp(double GameSpeed);
	void Move( Console& c, char a);

};

#endif