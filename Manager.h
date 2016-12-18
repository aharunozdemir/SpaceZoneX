#ifndef MANAGER_H
#define MANAGER_H

#include "console.h"
#include "Capsule.h"
//#include "MovingObjects.h"
class Manager
{
	Console c;
	//MovingObjects** MyObjects;
	Capsule** MyCapsule;
	double Speed;

	//void CreateNewObject(int i);
	void CreateCapsule();

public:
	Manager();
	~Manager();

	void Run();
};

#endif

