#define MaxObj 9
#define MaxLength 5
#define MaxY 65
#define MaxSpeed 20
#define SpeedControl 2500
#define SpeedChange 0.1
#define Slowest 0.1
#define Fastest 2

#include "manager.h"

Manager::Manager()
{

	Speed = 1.0;
	//MyObjects = new MovingObjects*[MaxObj];
	MyCapsule = new Capsule*[1];

	/*for(int h=0; h < MaxObj; h++)
		MyObjects[h] = NULL;
	for(int h=0; h < MaxObj; h++)
		CreateNewObject(h);*/

	CreateCapsule();
	MyCapsule[0]->Draw(c);
}

Manager::~Manager()
{
	for(int i = 0; i < MaxObj; i++)	
		//delete MyObjects[i];
	delete[] MyCapsule;
}

void Manager::CreateCapsule()
{
	Capsule* pCapsule = new Capsule(COORDINATE(20, 1), 5,
		c.rgb_b(192, 0, 0, 0) | c.rgb_f(192, 0, 0, 0),
		5);
	MyCapsule[0] = pCapsule;
}

/*void Manager::CreateNewShape(int i)
{
	if (rand() % 2 == 1) {
		Square* pShape = new Square(COORDINATE(0, (rand() % MaxY)), ((rand() % MaxSpeed) + 1),
			c.rgb_b(rand() % 2, rand() % 2, rand() % 2, rand() % 2) | c.rgb_f(rand() % 2, rand() % 2, rand() % 2, rand() % 2),
			((rand() % MaxLength) + 1));
		if (MyShapes[i])
			delete MyShapes[i];

		MyShapes[i] = pShape;
	}
	else {
		Triangle* pShape = new Triangle(COORDINATE(0, (rand() % MaxY)), ((rand() % MaxSpeed) + 1),
			c.rgb_b(rand() % 2, rand() % 2, rand() % 2, rand() % 2) | c.rgb_f(rand() % 2, rand() % 2, rand() % 2, rand() % 2),
			((rand() % MaxLength) + 1));
		if (MyShapes[i])
			delete MyShapes[i];

		MyShapes[i] = pShape;
	}

}


void Manager::SearchDelete(){

	int x = MyShape[0]->GetCoordinateX();
	int y = MyShape[0]->GetCoordinateY();
	int l = MyShape[0]->GetLength();

	for (int i = 0; i < MaxObj; i++)
	{
		int xA = MyShapes[i]->GetCoordinateX();
		int yA = MyShapes[i]->GetCoordinateY();
		int lA = MyShapes[i]->GetLength();

		for (int j = x; j <= x + l; j++) {
			for (int k = y; k <= y + l; k++) {
				if (j == xA && k == yA)
					MyShapes[i]->Delete(c);
				if (j == xA && k == yA + lA)
					MyShapes[i]->Delete(c);
				if (j == xA + lA && k == yA)
					MyShapes[i]->Delete(c);
				if (j == xA + lA && k == yA + lA)
					MyShapes[i]->Delete(c);

				//MyShape[0]->Draw(c);
			}
		}
		}
}*/

void Manager::Run()
{
	while(true)
	{
		for (int i = 0; i < 1000000; i++){}



		if (_kbhit())
		{

			char ch = _getch();
			if (ch == 'a' || ch == 'd') {
				MyCapsule[0]->Move(c, ch);
			}
	
		}
	
		/*
		for(int i = 0; i < MaxObj; i++)	
		{
			MyShapes[i]->Drop(Speed, c);
			if (MyShapes[i]->IsDead())
				CreateNewShape(i);
		}
		MyShape[0]->Draw(c);

		for (int i = 0; i < 1; i++)
		{
			if (MyShapes[i]->IsDead()) {
				CreateMyShape();
				MyShape[0]->Draw(c);
			}
		}*/
	}
}


