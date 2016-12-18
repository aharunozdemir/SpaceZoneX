#ifndef MOVINGOBJECTS_H
#define MOVINGOBJECTS_H

#include "console.h"
#include "coordinate.h"


class MovingObjects
{
protected:
	COORDINATE Base;
	int Speed;
	int SpeedCounter;
	int color;
	int Length;
public:

	MovingObjects(COORDINATE BaseIn, int SpeedIn, int colorIn, int LengthIn)
		: Base(BaseIn), Speed(SpeedIn), color(colorIn), Length(LengthIn), SpeedCounter(0)
	{
	}
	virtual bool IsDead() = 0;

	virtual void Draw(Console& c, char ch, int color)=0;
	virtual void Draw(Console& c) = 0;

	virtual void Delete(Console& c) = 0;

	virtual void Erase(Console& c) = 0;

	virtual bool TimeIsUp(double GameSpeed) = 0;
	virtual void Drop(double GameSpeed, Console& c) = 0;
};

#endif