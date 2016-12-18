#include "Capsule.h"
#include "console.h"
#include <math.h>

void Capsule::Erase(Console& c)
{
	Draw(c, ' ', c.rgb_b(0, 0, 0, 0) | c.rgb_f(0, 0, 0, 0));
}

void Capsule::Draw(Console& c)
{
	Draw(c, ' ', color);
}


void Capsule::Move( Console& c, char a)
{
	if (a == 'a') {
	Erase(c);
	Base.y= Base.y-6;
	Draw(c);
}
	if (a == 'd') {
		Erase(c);
		Base.y= Base.y+6;
		Draw(c);
	}
}

bool Capsule::IsDead()
{
	return Base.x == 25;
}


void Capsule::Draw(Console& c, char ch, int color)
{
	for (int i = Base.x; i <= Base.x + Length; i++)
		for (int j = Base.y; j <= Base.y + Length; j++)
		{
			c.SetColor(j, i, color);
			c.PrintChar(j, i, ch);
		}
}
